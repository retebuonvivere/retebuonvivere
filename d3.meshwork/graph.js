console.log("loading graph.js");
var meshwork_epsilon=0.01;

var meshwork_gradient;
var meshwork_gradient2;
var meshwork_dummy;

var meshwork_node;
var meshwork_link;
var meshwork_diagonal;
var meshwork_someNodeClicked=false;
var meshwork_graphData;
var meshwork_force;

function buildGradients()
{
	meshwork_gradient= meshwork_svg.append("defs")
		.append("linearGradient").attr("id","fadedGradient").attr("x1","0%").attr("x2","100%");
	
	meshwork_gradient.append("stop").attr("offset","0%").attr("stop-opacity","0%").attr("stop-color","cyan");
	meshwork_gradient.append("stop").attr("offset","85%").attr("stop-opacity","00%").attr("stop-color","cyan");
	meshwork_gradient.append("stop").attr("offset","100%").attr("stop-opacity","100%").attr("stop-color","cyan");

	meshwork_gradient2= meshwork_svg.append("defs")
		.append("linearGradient").attr("id","selectedFadedGradient").attr("x1","0%").attr("x2","100%");

	meshwork_gradient2.append("stop").attr("offset","0%").attr("stop-opacity","0%").attr("stop-color","blue");
	meshwork_gradient2.append("stop").attr("offset","85%").attr("stop-opacity","00%").attr("stop-color","blue");
	meshwork_gradient2.append("stop").attr("offset","100%").attr("stop-opacity","100%").attr("stop-color","blue");
}

var meshwork_pixelPerMs=meshwork_width/(meshwork_now.getTime()-meshwork_graphStartDate.getTime());

var meshwork_container;
var meshwork_xAxis;

function xForDate(date)
{
	return (date.getTime()-meshwork_graphStartDate.getTime())*meshwork_pixelPerMs;
}

function addClass(domElement,newClass)
{
  	var currentClasses=d3.select(domElement).attr("class");
  	return currentClasses+" "+newClass;
}

function setTranslate(node,x,y){
	// butta via le altre transform
	d3.select(node).attr("transform",translateString(x,y));		
}

function translateString(x,y) {
	return "translate("+x+","+y+")";
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
		return meshwork_now;
	}
	else
	{
		return node.end;
	}
}

function meshwork_drawGraph()
{
/*	non vanno senza node...
testNoOverlap1();
	testNoOverlap2();
	testNoOverlap3();
	testNoOverlap4();
	testNoOverlap5();*/
	buildGradients();
	meshwork_dummy=meshwork_svg.append("g");
	
	meshwork_force = d3.layout.force()
		.friction(0.9)
		.charge(-250)
	/*	.charge(function(d,i){
			if (meshwork_someNodeClicked)
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
			if (meshwork_someNodeClicked)
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
		.size([meshwork_width, meshwork_height]);

	meshwork_force
	  .nodes(meshwork_graphData.nodes)
	  .links(meshwork_graphData.links)
	  .start()
	  .alpha(0.01);

	meshwork_container=meshwork_svg.append("g").attr("id","container");

   	var timeScale = d3.time.scale() // time.scale() invece di scale.linear()
		.domain([meshwork_graphStartDate, meshwork_now])
		.range([0, meshwork_width]);
	
	meshwork_diagonal=d3.svg.diagonal()
		.source(function(l){return {y:xForDate(l.date)-4,x:l.source.y};})
		.target(function(l){return {y:xForDate(l.date)+4,x:l.target.y};})
		.projection(function(d){return [d.y,d.x];});

	meshwork_link = meshwork_container.selectAll(".link")
	  .data(meshwork_graphData.links)
	  .enter()
	  .append("path")
	  .attr("d",meshwork_diagonal)
	  .attr("class", "link")
	  .attr("class", function(d){
	  	return addClass(this,"source"+d.source.id);
	  })
	  .attr("class", function(d){
	  	return addClass(this,"target"+d.target.id);
	  });
	  

	var drag = meshwork_force.drag()
    	.on("dragstart", function (d) {
			d3.event.sourceEvent.stopPropagation();
		});

	meshwork_node = meshwork_container.selectAll(".node")
		.data(meshwork_graphData.nodes)
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
		
	meshwork_node.append("text")
		.text(function(d){return d.name;})
		.attr("x",meshwork_width+10);

	var nodeXG= meshwork_node.append("g")
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
	  .attr("y2",function(d,i){return d.y+meshwork_epsilon;});*/
	  
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
	  .attr("y2",meshwork_epsilon)
	
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
			.attr("r",meshwork_circleRadius);
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
			.attr("r",meshwork_circleRadius);
	});

	console.log(startedNodes);
	

	meshwork_node.on("mouseover",nodeOverHandler);         
	meshwork_node.on("click", nodeClickHandler);
	d3.select("body").on("click", bodyClickHandler)
    
	meshwork_node.append("title")
	  .text(function(d) {return d.name;});

	meshwork_force.on("tick", function() {
		meshwork_node.each(function(d){
			setTranslate(this,0,d.y)
		})
		meshwork_link.attr("d",meshwork_diagonal)
	});

	meshwork_force.on("end",function() {
	//	console.log("force ended");
		var nodes=meshwork_graphData.nodes.slice(0);
//		console.log(meshwork_graphData);

		noOverlap(nodes,meshwork_nodesMinimumPixelDistance,meshwork_nodesMinimumPixelDistanceBackLash);

		
		
		
	});
	var zoom = d3.behavior.zoom()
		.scaleExtent([0.1, 10])
		.on("zoom", function() {
//			console.log("zoom");
			meshwork_isZooming=true;
			var t=d3.event.translate;
			var s=d3.event.scale;
			if (t[0]<-meshwork_width*(s-1))
			{
				t[0]=-meshwork_width*(s-1);
				zoom.translate(t);
			}
			meshwork_container.attr("transform", "translate(" + t + ")scale(" + d3.event.scale + ")");
			meshwork_svg.call(meshwork_xAxis);
		})
		.x(timeScale);

//	svg.on("mouseup",function(){
//		console.log("mouseup");
//	});


	meshwork_svg.on("mousedown",function(){
//		console.log("mousedown");
		meshwork_isZooming=false;	
	});

	meshwork_svg.call(zoom);


	meshwork_xAxis = d3.svg.axis()
		.scale(timeScale)
		.tickSize(0,0)
		/*.tickPadding(10)	
		.tickSubdivide(true)	*/
		.orient("bottom");

	meshwork_svg
		.attr("class", "x axis")
		.call(meshwork_xAxis);

}
function meshwork_toggleFullscreen()
{
	var fsElem = jQuery("#"+meshwork_drupalPanel).get(0);
	
	if (
		fsElem.fullscreenElement ||
		fsElem.webkitFullscreenElement ||
		fsElem.mozFullScreenElement ||
		fsElem.msFullscreenElement
	) {

		if (fsElem.exitFullscreen) {
			fsElem.exitFullscreen();
		}
		else if (fsElem.mozCancelFullScreen) {
			fsElem.mozCancelFullScreen();
		}
		else if (fsElem.webkitCancelFullScreen) {
			fsElem.webkitCancelFullScreen();
		}
	}
	else	
	{
		if (fsElem.requestFullscreen) {
			fsElem.requestFullscreen();
		}
		else if (fsElem.mozRequestFullScreen) {
			fsElem.mozRequestFullScreen();
		}
		else if (fsElem.webkitRequestFullScreen) {
			fsElem.webkitRequestFullScreen();
		}
	}
}


var meshwork_isZooming=false;

function bodyClickHandler(){
//	console.log("bodyClick");
	if (meshwork_isZooming) return;
	console.log("not zooming");
	jQuery.sidr('close',"sidrPanel");
	d3.selectAll(".clicked").each(function(d){
		d["clicked"]=false;
	});
	d3.selectAll(".clicked").classed("clicked",false);
	d3.selectAll(".unclicked").on("click",nodeClickHandler).on("mouseover",nodeOverHandler);
	d3.selectAll(".unclicked").classed("unclicked",false);
	meshwork_someNodeClicked=false;
	meshwork_force.friction(meshwork_unclickFriction).start().alpha(meshwork_unclickAlpha);
}

function nodeOverHandler(d) {
	if (meshwork_someNodeClicked) return;
	d3.selectAll(".selected").classed("selected",false);

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
}

var meshwork_isPanelOpen=false;

function nodeClickHandler(d) {
	console.log(d.name);
    	if (meshwork_someNodeClicked && !d3.select(this).classed("clicked")) 
		return;		
	d3.event.stopPropagation();
	shouldPanelOpen=true;

	meshwork_dummy.call(function(){
		jQuery(this).sidr({
			name:"sidrPanel",
			source: function (name) {
				var neighboursAndEdges=neighboursAndEdgesOfNode(d)
				return meshwork_panelContentGenerator(d,neighboursAndEdges["nodes"],neighboursAndEdges["edges"]);
	      		},
	   		side:"right",
	   		displace: false,
			onOpen:function(){
				meshwork_isPanelOpen=true;
			},
			onClose:function(){
				meshwork_isPanelOpen=false;
			}
			
		});
	});
	d["panelCreated"]=true;

	// poi si apre il nuovo;
	jQuery.sidr("close","sidrPanel");
	setTimeout(function(){
		console.log("opening");
		jQuery.sidr("open","sidrPanel");},500);
	
	
	if (!meshwork_someNodeClicked)
	{
		d3.selectAll(".selected").classed("clicked",true).attr("z-index",100).each(function(d){
	    		d["clicked"]=true;
	    	});
	    	d3.selectAll(".node:not(.clicked),.link:not(.clicked)").classed("unclicked",true).attr("z-index",0).on("click",null).on("mouseover",null);
	    	meshwork_someNodeClicked=true;
	    	relayout(".node.clicked");
	}
}	

function neighboursAndEdgesOfNode(n)
{
	var result={"nodes":[],"edges":[]}
	var links=meshwork_graphData["links"];
	for (var i=0;i<links.length;i++)
	{
		if (links[i].source==n)
		{
			result["nodes"].push(links[i].target)
			result["edges"].push(links[i])
		}
		else if (links[i].target==n)
		{
			result["nodes"].push(links[i].source)
			result["edges"].push(links[i])
		}			
	}
	return result;
}


function noOverlap(nodes,meshwork_nodesMinimumPixelDistance,meshwork_nodesMinimumPixelDistanceBackLash)
{
	if (typeof meshwork_node == "undefined")
		return;
	nodes.sort(function(a,b){return a.y-b.y;});
	var yshift=0;
	var adaptedMargin=nodes.length>4?meshwork_margin:meshwork_margin*2;
	var o=meshwork_axisHeight+adaptedMargin;
	for (var i=0;i<nodes.length;i++)
	{
		var n=nodes[i];
		if (i==0)
		{
			yshift=n.y-o;
			n.y=o;
			continue;
		}
		var prevNode=nodes[i-1];
		if (meshwork_someNodeClicked && !n["clicked"])
		{
			continue;
		}

		var backLash=meshwork_nodesMinimumPixelDistanceBackLash*meshwork_nodesMinimumPixelDistance*Math.random() - meshwork_nodesMinimumPixelDistanceBackLash*meshwork_nodesMinimumPixelDistance/2;
		n.y-=yshift;
		n.y=Math.max(n.y,prevNode.y+meshwork_nodesMinimumPixelDistance+backLash);
	}

	var H=nodes[nodes.length-1].y;
	var h=meshwork_height-adaptedMargin;
	if (nodes.length>1)
	{
		for (var i=0;i<nodes.length;i++)
		{
			var n=nodes[i];
			n.y=(n.y*h-n.y*o-o*h+o*o)/(H-o)+o;
		}
	}
	
	meshwork_node.transition()
			.attr("transform",function(d){
				return translateString(0,d.y);
			})
	meshwork_link.transition().attr("d",meshwork_diagonal);
}

function relayout(selector)
{
	meshwork_container.attr("transform", "translate(0,0)scale(1)");

	var selectedNodes=[];
	d3.selectAll(selector).each(function(d){
		if (selectedNodes.indexOf(d)==-1)
			selectedNodes.push(d);
	})
	console.log("relayout selectedNodes:");
	console.log(selectedNodes);
	noOverlap(selectedNodes,meshwork_height/(selectedNodes.length+2),meshwork_nodesMinimumPixelDistanceBackLash*2);
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

