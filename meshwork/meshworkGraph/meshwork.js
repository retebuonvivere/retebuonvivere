var epsilon=0.01;
var svg = d3.select("body").append("svg")
    .attr("width", width+circleRadius+10+textWidth)
    .attr("height", height);

var gradient= svg.append("defs")
	.append("linearGradient").attr("id","fadedGradient").attr("x1","0%").attr("x2","100%");
	
gradient.append("stop").attr("offset","0%").attr("stop-opacity","0%").attr("stop-color","cyan");
gradient.append("stop").attr("offset","85%").attr("stop-opacity","00%").attr("stop-color","cyan");
gradient.append("stop").attr("offset","100%").attr("stop-opacity","100%").attr("stop-color","cyan");

var gradient2= svg.append("defs")
	.append("linearGradient").attr("id","selectedFadedGradient").attr("x1","0%").attr("x2","100%");

gradient2.append("stop").attr("offset","0%").attr("stop-opacity","0%").attr("stop-color","blue");
gradient2.append("stop").attr("offset","85%").attr("stop-opacity","00%").attr("stop-color","blue");
gradient2.append("stop").attr("offset","100%").attr("stop-opacity","100%").attr("stop-color","blue");

var color = d3.scale.category10();


var pixelPerMs=width/(now.getTime()-graphStartDate.getTime());

var container;
var xAxis;

function xForDate(date)
{
	return (date.getTime()-graphStartDate.getTime())*pixelPerMs;
}

function addClass(domElement,newClass)
{
  	var currentClasses=d3.select(domElement).attr("class");
  	return currentClasses+" "+newClass;
}

function setTranslate(node,x,y){
	// butta via le altre transform
	d3.select(node).attr("transform","translate("+x+","+y+")");		
}

function moveY(node,y){
	var previousTransform=d3.select(node).attr("transform")
	var matches;
	if (previousTransform==null)
	{
		matches=["","","","",""];
	}
	else
	{
		var pattern=/(.*)translate\(([-\d.]+),([-\d.]+)\)(.*)/;
		matches=previousTransform.match(pattern);
	}
	var newTransform=matches[1]+"translate("+matches[2]+","+y+")"+matches[4];
	d3.select(node).attr("transform",newTransform);		
}

function dateAddMs(date,ms)
{
	return new Date(date.getTime()+ms)
}

function readNodeEnd(node)
{
	if (node.end==null)
	{
		return now;
	}
	else
	{
		return node.end;
	}
}
var node;
var link;
var diagonal;
var someNodeClicked=false;
var graphData;
function drawGraph()
{
/*	non vanno senza node...
testNoOverlap1();
	testNoOverlap2();
	testNoOverlap3();
	testNoOverlap4();
	testNoOverlap5();*/

	
	var force = d3.layout.force()
		.friction(0.9)
		.charge(-200)
	/*	.charge(function(d,i){
			if (someNodeClicked)
			{
				if (d["clicked"])
				{
					return -500;
				}
				else
				{
					return -250;
				}
			}
			else
			{
				return -250;
			}
		})*/
/*		.linkStrength(
		.friction(
		.chargeDistance(
		*/
		.linkDistance(function(e,i){
			if (someNodeClicked)
			{
				if (e.source["clicked"] && e.target["clicked"])
				{
					return 100;
				}
				else if (!e.source["clicked"] && !e.target["clicked"])
				{
					return 1;
				}
				else
				{
					return 500;
				}
			}
			else
			{
				return 100;
			}
		})
		.gravity(.1)
		.size([width, height]);

	force
	  .nodes(graphData.nodes)
	  .links(graphData.links)
	  .start()
	  .alpha(0.01);

	container=svg.append("g").attr("id","container");

   	var timeScale = d3.time.scale() // time.scale() invece di scale.linear()
		.domain([graphStartDate, now])
		.range([0, width]);
	
	diagonal=d3.svg.diagonal()
		.source(function(l){return {y:xForDate(l.date)-4,x:l.source.y};})
		.target(function(l){return {y:xForDate(l.date)+4,x:l.target.y};})
		.projection(function(d){return [d.y,d.x];});

	link = container.selectAll(".link")
	  .data(graphData.links)
	  .enter()
	  .append("path")
	  .attr("d",diagonal)
	  .attr("class", "link")
	  .attr("class", function(d){
	  	return addClass(this,"source"+d.source.id);
	  })
	  .attr("class", function(d){
	  	return addClass(this,"target"+d.target.id);
	  });
	  

	var drag = force.drag()
    	.on("dragstart", function (d) {
			d3.event.sourceEvent.stopPropagation();
		});

	node = container.selectAll(".node")
		.data(graphData.nodes)
		.enter()
		.append("g")
		.attr("class",function(d){
			return d.nodeType;
		})
		.attr("class",function(d){
			return addClass(this,"id"+d.id);
		})
   		.classed("node",true)
		.each(function(d){
			setTranslate(this,0,d.y);
		})
		.on('mouseout', function(d){
			d3.selectAll(".hover").classed("hover",false);
   		});
		
	node.append("text")
		.text(function(d){return d.name;})
		.attr("x",width+10);

	var nodeXG= node.append("g")
		.attr("class",function(d){
			return d.nodeType;
		})
		.attr("class",function(d){
			return addClass(this,"id"+d.id);
		})
   		.classed("node",true)
		.each(function(d){
			var x=0;
			if (d.nodeType=="org-neverStarted")
			{
				x=xForDate(new Date(readNodeEnd(d).getTime()-365*24*60*60*1000));
			}
			else
			{
				x=xForDate(d.start);
			}
			d.origX=x;
			setTranslate(this,x,0);
		})

	  
  	  /*.attr("y1",function(d,i){return d.y;})
	  .attr("y2",function(d,i){return d.y+epsilon;});*/
	  
	var nodeLines = nodeXG.append("line")
		.attr("class",function(n){
	  		return n.nodeType;
	  	})
	  .attr("class",function(n){
	  		return addClass(this,"id"+n.id);
	  	})
		.classed("node",true)
	  .attr("x1",0)
	  .attr("x2",function(d){
			var startx=0;
			if (d.nodeType=="org-neverStarted")
			{
				startx=xForDate(new Date(readNodeEnd(d).getTime()-365*24*60*60*1000));
			}
			else
			{
				startx=xForDate(d.start);
			}

			return xForDate(readNodeEnd(d))-startx;
		})
	  .attr("y1",0)
	  .attr("y2",epsilon)
	
	nodeXG.classed("started",function(d){return (d.nodeType!="org-neverStarted")});
	nodeXG.classed("ended",function(d){return (d.end!=null)});

	var startedNodes=d3.selectAll(".started").each(function(d){
		var nodeg=d3.select(this);
		if (typeof d==="undefined") return;
		nodeg.append("circle")
			.attr("class",function(){
				return d.nodeType;
			})
			.attr("class",function(){
				return addClass(this,"id"+d.id);
			})
			.classed("node",true)
			.attr("cy",0)
			.attr("cx",0)
			.attr("r",circleRadius);
	});
	
	
	var endedNodes=d3.selectAll(".ended").each(function(d){
		var nodeg=d3.select(this);
		if (typeof d==="undefined") return;
		nodeg.append("circle")
			.attr("class",function(){
				return d.nodeType;
			})
			.attr("class",function(){
				return addClass(this,"id"+d.id);
			})
			.classed("node",true)
			.attr("cy",0)
			.attr("cx",function(d){
				var startx=0;
				if (d.nodeType=="org-neverStarted")
				{
					startx=xForDate(new Date(d.end.getTime()-365*24*60*60*1000));
				}
				else
				{
					startx=xForDate(d.start);
				}

				return xForDate(d.end)-startx;
			})
			.attr("r",circleRadius);
	});

	console.log(startedNodes);
	
	var panelId=0;	
	var lastOpenedPanel;
	node.on("mouseover", function(d) {
		if (someNodeClicked) return;
		d3.selectAll(".selected").classed("selected",false);

		if (typeof d["panelCreated"] == "undefined")
		{
			panelId++;
			var panelName="sidrPanel"+panelId
			$(this).sidr({
				name:panelName,
				source: function (name) {
					return panelContentGenerator(d);
	      		},
	      		side:"right",
	      		body:"#container",
	      		onOpen:function() {
	      			lastOpenedPanel=panelName
	      		}
	      
			});
			d["panelCreated"]=true;
		}
		d3.select(this).classed("hover",true);
		d3.selectAll(".id"+d.id).classed("hover",true);
		
		d3.selectAll("."+"source"+d.id+",."+"target"+d.id).classed("hover",true).each(function(){
			var edge=d3.select(this);
			
			var allClasses=edge.attr("class").split(" ");
			var targetClass=allClasses.filter(function(e){return e.match(/target.*/);})[0];
			var targetId=targetClass.substr(6);
			d3.selectAll(".id"+targetId).classed("hover",true);
		
			var sourceClass=allClasses.filter(function(e){return e.match(/source.*/);})[0];
			var sourceId=sourceClass.substr(6);
			d3.selectAll(".id"+sourceId).classed("hover",true);
			d3.selectAll(".hover").classed("selected",true);
		});
		
		d3.selectAll(".hover").classed("selected",true);
    });      
    
    node.on("click", function() {
    	d3.event.stopPropagation();
		if (someNodeClicked) return;

    	d3.selectAll(".selected").classed("clicked",true).each(function(d){
    		d["clicked"]=true;
    	});
    	d3.selectAll("*:not(.clicked)").classed("unclicked",true).each(function(d){
    	});
    	someNodeClicked=true;
    	relayout(".node.clicked")
//    	force.start();
    });
    
    d3.select("body").on("click", function(){
    	$.sidr('close',lastOpenedPanel);
    	d3.selectAll(".clicked").each(function(d){
    		d["clicked"]=false;
    	});
    	d3.selectAll(".clicked").classed("clicked",false);
    	d3.selectAll(".unclicked").classed("unclicked",false);
    	someNodeClicked=false;
    	force.friction(unclickFriction).start().alpha(unclickAlpha);
    })
    
	node.append("title")
	  .text(function(d) {return d.name;});

	force.on("tick", function() {
		node.each(function(d){
			setTranslate(this,0,d.y)
		})
		link.attr("d",diagonal)
	});

	force.on("end",function() {
	//	console.log("force ended");
		var nodes=graphData.nodes.slice(0);
//		console.log(graphData);

		noOverlap(nodes,nodesMinimumPixelDistance,nodesMinimumPixelDistanceBackLash);

		
		
		
	});
	var zoom = d3.behavior.zoom()
		.scaleExtent([0.1, 10])
		.on("zoom", function() {
			var t=d3.event.translate;
			var s=d3.event.scale;
			if (t[0]<-width*(s-1))
			{
				t[0]=-width*(s-1);
				zoom.translate(t);
			}
			container.attr("transform", "translate(" + t + ")scale(" + d3.event.scale + ")");
			svg.call(xAxis);
		})
		.x(timeScale);



    svg.call(zoom);


	xAxis = d3.svg.axis()
		.scale(timeScale)
		.tickSize(-height)
		.tickPadding(10)	
		.tickSubdivide(true)	
		.orient("bottom");

	svg
		.attr("class", "x axis")
		.call(xAxis);

}

		

function noOverlap(nodes,nodesMinimumPixelDistance,nodesMinimumPixelDistanceBackLash)
{
	if (typeof node == "undefined")
		return;
	nodes.sort(function(a,b){return a.y-b.y;});
	
	for (var i=0;i<nodes.length;i++)
	{
		if (i==0)
		{
			continue;
		}
		var n=nodes[i];
		var prevNode=nodes[i-1];
		if (someNodeClicked && !n["clicked"])
		{
			continue;
		}

		var backLash=nodesMinimumPixelDistanceBackLash*nodesMinimumPixelDistance*Math.random() - nodesMinimumPixelDistanceBackLash*nodesMinimumPixelDistance/2;
		n.y=Math.max(n.y,prevNode.y+nodesMinimumPixelDistance+backLash);
	}
	
	node.transition()
			.delay(100)
			.each(function(d){
				console.log(d);
				setTranslate(this,0,d.y)
			})
	link.transition().attr("d",diagonal);
}

function relayout(selector)
{
	var selectedNodes=[];
	d3.selectAll(selector).each(function(d){
		if (selectedNodes.indexOf(d)==-1)
			selectedNodes.push(d);
	})
	console.log("relayout selectedNodes:");
	console.log(selectedNodes);
	noOverlap(selectedNodes,height/(selectedNodes.length+2),nodesMinimumPixelDistanceBackLash*2);
}







function assert(condition, message) {
    if (condition) {
    	console.log("test passed");
    }
    else
    {
        throw message || "Assertion failed";
    }
    
}


function minimumDistanceGreaterThan(array,md)
{
	var min=9000000000;
	for (var i=1;i<array.length;i++)
	{
		min=Math.min(min,array[i].y-array[i-1].y);
	}
	return min>=md
}
function testNoOverlap1()
{
	var nodes=[{"y":10},{"y":20},{"y":31}];
	noOverlap(nodes,5,0);
	assert(minimumDistanceGreaterThan(nodes,5),null);
}
function testNoOverlap2()
{
	var nodes=[{"y":10},{"y":20},{"y":31}];
	noOverlap(nodes,20,0);
	assert(minimumDistanceGreaterThan(nodes,20),null);
}
function testNoOverlap3()
{
	var nodes=[{"y":10},{"y":20},{"y":50},{"y":60}];
	noOverlap(nodes,15,0);
	assert(minimumDistanceGreaterThan(nodes,15),null);
	assert(nodes[2].y==50);
}
function testNoOverlap4()
{
	var nodes=[{"y":10},{"y":20},{"y":31}];
	noOverlap(nodes,30,0);
	assert(minimumDistanceGreaterThan(nodes,30),null);
}
function testNoOverlap5()
{
	var nodes=[{"y":10},{"y":20},{"y":35},{"y":50}];
	noOverlap(nodes,15,0);
	assert(minimumDistanceGreaterThan(nodes,15),null);
}

