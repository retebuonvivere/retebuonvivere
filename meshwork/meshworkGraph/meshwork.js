var epsilon=0.00001

var svg = d3.select("body").append("svg")
    .attr("width", width)
    .attr("height", height);

var gradient= svg.append("defs")
	.append("linearGradient").attr("id","fadedGradient").attr("x1","0%").attr("x2","100%");
	
gradient.append("stop").attr("offset","0%").attr("stop-opacity","0%").attr("stop-color","blue");
gradient.append("stop").attr("offset","85%").attr("stop-opacity","00%").attr("stop-color","blue");
gradient.append("stop").attr("offset","100%").attr("stop-opacity","100%").attr("stop-color","blue");

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
	force
	  .nodes(graphData.nodes)
	  .links(graphData.links)
	  .start();

	container=svg.append("g")
		

/*	var drag = d3.behavior.drag()
		.origin(function(d) { return d; })
		.on("dragstart", dragstarted)
		.on("drag", dragged)
		.on("dragend", dragended);*/
    var scale = d3.time.scale() // time.scale() invece di scale.linear()
		.domain([graphStartDate, now])
		.range([0, width]);

	var link = container.selectAll(".link")
	  .data(graphData.links)
	  .enter()
	  .append("line")
	  .attr("class", "link");

	var drag = force.drag()
    	.on("dragstart", function (d) {
			d3.event.sourceEvent.stopPropagation();
		});
	var node = container.selectAll(".node")
	  .data(graphData.nodes)
	  .enter()
	  .append("line")
	  .attr("class",function(n){
	  		if (n.nodeType=="org-neverStarted")
	  		{
	  			return "node-neverStarted";
	  		}
	  		else
	  		{
	  			return "node";
	  		}
	  	})
	  .attr("x1",function(d){return xForDate(d.start);})
	  .attr("x2",function(d){return xForDate(d.end);})
	  .attr("y1",function(d,i){return d.y;})
	  .attr("y2",function(d,i){return d.y+epsilon;})
	  .style("stroke",function(n) { 
	  		if (n.nodeType=="org-neverStarted")
	  		{
	  			return "url(#fadedGradient)";
	  		}
	  		else
	  		{
	  			return color(n.nodeType);
	  		}
	  })
	  .style("stroke-width","4px")
	  .call(drag);

	node.append("title")
	  .text(function(d) {return d.name;});

	force.on("tick", function() {
	link.attr("x1", function(d) { return xForDate(d.date) -3; }) //per inclinare le linee ci vuole un metodo migliore
		.attr("y1", function(d) { return d.source.y; })
		.attr("x2", function(d) { return xForDate(d.date); })
		.attr("y2", function(d) { return d.target.y; });

	node.attr("y1",function(d,i){return d.y;})
		.attr("y2",function(d,i){return d.y+epsilon;});
	});



	var zoom = d3.behavior.zoom()
		.scaleExtent([0.1, 10])
		.on("zoom", function() {
//			container.select("g").call(xAxis);
			container.attr("transform", "translate(" + d3.event.translate + ")scale(" + d3.event.scale + ")");
			svg.call(xAxis);
		})
		.x(scale);



/*	svg.append("rect")
                .attr("x", 0)
                .attr("y", 0)
                .attr("width", width)
                .attr("height", height)
                .attr("opacity", 0);*/
    svg.call(zoom);


	xAxis = d3.svg.axis()
		.scale(scale)
//		.ticks(d3.time.months, 2)
		.tickSize(-height)
		.tickPadding(10)	
		.tickSubdivide(true)	
		.orient("bottom");

	svg
		.attr("class", "x axis")
		.call(xAxis);

}

/*
function dragged(d) {
  d3.select(this).attr("y1",  d3.event.x).attr("cy", d.y = d3.event.y);
}
*//*
function dragended(d) {
  d3.select(this).classed("dragging", false);
}
*/