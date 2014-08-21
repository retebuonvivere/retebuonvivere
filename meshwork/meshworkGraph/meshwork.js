

function drawGraph(graphData)
{
	force
	  .nodes(graphData.nodes)
	  .links(graphData.links)
	  .start();

	var link = svg.selectAll(".link")
	  .data(graphData.links)
	  .enter().append("line")
	  .attr("class", "link");

	var node = svg.selectAll(".node")
	  .data(graphData.nodes)
	  .enter().append("line")
	  .attr("class", "node")
	  .attr("x1",function(d){return xForDate(d.start);})
	  .attr("x2",function(d){return xForDate(d.end);})
	  .attr("y1",function(d,i){return d.y;})
	  .attr("y2",function(d,i){return d.y;})
	  .style("stroke",function(d) { return color(d.nodeType); })
	  .call(force.drag);

	node.append("title")
	  .text(function(d) {return d.name;});

	force.on("tick", function() {
	link.attr("x1", function(d) { return xForDate(d.date); })
		.attr("y1", function(d) { return d.source.y; })
		.attr("x2", function(d) { return xForDate(d.date); })
		.attr("y2", function(d) { return d.target.y; });

	node.attr("y1",function(d,i){return d.y;})
		.attr("y2",function(d,i){return d.y;});
	});



	var x = d3.scale.linear()
		.domain([graphStartDate, now])
		.range([0, width]);


	var xAxis = d3.svg.axis()
		.scale(x)
		.tickSize(-height)
		.tickPadding(10)	
		.tickSubdivide(true)	
		.orient("bottom");	


	svg.append("g")
		.attr("class", "x axis")
	//    .attr("transform", "translate(0," + height + ")")
		.call(xAxis);

}
