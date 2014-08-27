var epsilon=0.01;

var svg = d3.select("body").append("svg")
    .attr("width", width)
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

var force = d3.layout.force()
    .charge(-250)
    .linkDistance(100)
    .gravity(.1)
    .size([width, height]);

var pixelPerMs=width/(now.getTime()-graphStartDate.getTime());

var container;
var xAxis;

function xForDate(date)
{
	return (date.getTime()-graphStartDate.getTime())*pixelPerMs;
}
      
function drawGraph(graphData)
{
	testNoOverlap1();
	testNoOverlap2();
	testNoOverlap3();
	testNoOverlap4();
	testNoOverlap5();

	force
	  .nodes(graphData.nodes)
	  .links(graphData.links)
	  .start();

	container=svg.append("g").attr("id","container");

   	var scale = d3.time.scale() // time.scale() invece di scale.linear()
		.domain([graphStartDate, now])
		.range([0, width]);
	
	var diagonal=d3.svg.diagonal()
		.source(function(l){return {y:xForDate(l.date)-4,x:l.source.y};})
		.target(function(l){return {y:xForDate(l.date)+4,x:l.target.y};})
		.projection(function(d){return [d.y,d.x];});

	var link = container.selectAll(".link")
	  .data(graphData.links)
	  .enter()
	  .append("path")
	  .attr("d",diagonal)
	  .attr("class", "link");

	var drag = force.drag()
    	.on("dragstart", function (d) {
			d3.event.sourceEvent.stopPropagation();
		});
	
	var tooltip= d3.tip()
		.attr("class","node-tooltip")
//		.offset([-10,0])
		.direction("e")
		.html(function(d) {
			return "<strong>"+d.name+"</strong>";
		});
		
	
	
	var node = container.selectAll(".node")
	  .data(graphData.nodes)
	  .enter()
	  .append("line")
	  .attr("class",function(n){
	  		return n.nodeType;
	  	})
	  .attr("x1",function(d){
			if (d.nodeType=="org-neverStarted")
			{
				return xForDate(new Date(d.end.getTime()-365*24*60*60*1000));
			}
			else
			{
				return xForDate(d.start);
			}
		})
	  .attr("x2",function(d){return xForDate(d.end);})
	  .attr("y1",function(d,i){return d.y;})
	  .attr("y2",function(d,i){return d.y+epsilon;})
	  .style("stroke-width","4px")
//      .on('mouseover', tooltip.show)
      .on('mouseout', tooltip.hide)
	  .call(drag)
	  .call(tooltip);
	var panelId=0;	
	node.on("mouseover", function(d) {
		tooltip.show(d)
		var panelName="sidrPanel"+panelId
		console.log(panelName)
		$(this).sidr({
			name:panelName,
			source: function (name) {
			//[{"nodeType": "org", "name": "Naturalmente Verona - Arcipelago Scec", "url": "http://www.retebuonvivere.org/node/1", "id": "1", "start": "N", "end": "N", "orgType": "associazione", "categories": "bio"},
      			var html="<h1>"+d.name+"</h1>"+
      					"<p><a href=\""+d.url+"\">Informazioni</p>"+
      					"<p>Nascita:"+d.start+"</p>";
      			if (d.end.getTime()<now.getTime())
      				html=html+"<p>Chiusura:"+d.end+"</p>";
      			return html;      					
      		},
      		side:"right",
      		body:"#container"
   		});
		console.log("over")
	//	$.sidr('open','sidrPanel'+panelId);
		panelId++;
    });      
	node.append("title")
	  .text(function(d) {return d.name;});

	force.on("tick", function() {
		node.attr("y1",function(d,i){
				return d.y;
			})
			.attr("y2",function(d,i){
				return d.y+epsilon;
			});
		link.attr("d",diagonal)
	});

	force.on("end",function() {
	//	console.log("force ended");
		var nodes=graphData.nodes.slice(0);
//		console.log(graphData);

		noOverlap(nodes,nodesMinimumPixelDistance,nodesMinimumPixelDistanceBackLash);

		node.transition()
			.delay(100)
			.attr("y1",function(d,i){
				return d.y;
			})
			.attr("y2",function(d,i){
				return d.y+epsilon;
			});
		link.transition().attr("d",diagonal);
		
		
	});

	var zoom = d3.behavior.zoom()
		.scaleExtent([0.1, 10])
		.on("zoom", function() {
			container.attr("transform", "translate(" + d3.event.translate + ")scale(" + d3.event.scale + ")");
			svg.call(xAxis);
		})
		.x(scale);

    svg.call(zoom);


	xAxis = d3.svg.axis()
		.scale(scale)
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
	nodes.sort(function(a,b){return a.y-b.y;});
	
	for (var i=0;i<nodes.length;i++)
	{
		if (i==0)
		{
			continue;
		}
		var n=nodes[i];
		var prevNode=nodes[i-1];

		var backLash=nodesMinimumPixelDistanceBackLash*nodesMinimumPixelDistance*Math.random() - nodesMinimumPixelDistanceBackLash*nodesMinimumPixelDistance/2;
		n.y=Math.max(n.y,prevNode.y+nodesMinimumPixelDistance+backLash);
	}
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

