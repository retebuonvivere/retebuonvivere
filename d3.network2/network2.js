(function($) {
  Drupal.d3.network2 = function (select, settings) {
    console.log("network2");
    var network_width = $("#graphapi-default").width();
//    (settings.config.height || 
    var network_height;
    if ($("#graphapi-default").width() > 360)
        network_height = Math.max($(window).height()*0.65,320);
    else
        network_height = settings.config.height;

    var now=new Date();
    
    function msToDays(ms)
    {
	    return ms/(1000.0*60.0*60.0*24.0);
    }

    function daysToMs(days)
    {
	    return days*1000.0*60.0*60.0*24.0;
    }

    function dateValid(d)
    {
	    return !isNaN(d.getTime());
    };
    
    function setStartEnd(object, timefield)
	{
		var s=object[timefield];
		if (s==null)
		{
			object.start=new Date(0,0,0,0,0,0);
			object.end=now;
		}
		else
		{
			var dateComponents=s.split(",");
			object.start=new Date(dateComponents[0]);
			object.end=new Date(dateComponents[1]);
		}
	}
 
	function setAge(object)
	{
		if (!dateValid(object.start) || !dateValid(object.end))
		{
			object.age=daysToMs(365);
		}
		else if (dateEquals(object.start,object.end) || object.end.getTime()>now.getTime())
		{
			object.age=1;
		}
		else 
		{
			object.age=now.getTime()-object.end.getTime();
		}
	}
    
    var maxDays=200;	
	var min=70; /* Min and max distance */
	var max=260;
	var b=Math.E;
	var k=daysToMs(maxDays)/Math.log(max-min);

	var distanceFromAge=function(age){
    	var v=Math.pow(b,age/k)+min;
    	v=Math.min(max,Math.max(min,v));
    	return v;
    };
    
    var distanceForLink=function(link){
    	return distanceFromAge(link.age);
    }
    
    var network_nodes = settings.nodes,
        network_links = settings.links;

    // Add an attribute to each node that is a source node so that we can use that attribute to style them differently.
    network_links.map(function(d) { network_nodes[d.target].is_source = true; });

    var network_force = d3.layout.force()
      .size([network_width-200, network_height])
      .charge(-250)
      .friction(0.92)
      .linkDistance(110)
      .gravity(0.1);

    for (var i=0;i<network_links.length;i++){
    	var link=network_links[i];
		setStartEnd(link,"color");
		setAge(link);
	}
	
//    network_force.linkDistance(distanceForLink)

	for (var i=0;i<network_nodes.length;i++){
		var node=network_nodes[i];
		setStartEnd(node,"content");
		setAge(node);		
	}

    var zoomListener = d3.behavior.zoom()
        .scaleExtent([-10, 10])
        .on("zoom", zoomHandler);
    
    function zoomHandler() {
        network_graph.attr("transform", "translate(" + d3.event.translate + ")scale(" + d3.event.scale + ")");
    }

    var network_svg = d3.select('#' + settings.id).append("svg")
        .attr("width", network_width)
        .attr("height", network_height)
        .call(zoomListener);

    // grid
    network_svg.append("line").attr("x1",network_width/2).attr("x2",network_width/2).attr("y1",0).attr("y2",network_height).attr("stroke", "#ccc").attr("stroke-dasharray", "2,5");
    network_svg.append("line").attr("x1",network_width/4).attr("x2",network_width/4).attr("y1",0).attr("y2",network_height).attr("stroke", "#ccc").attr("stroke-dasharray", "2,5");
    network_svg.append("line").attr("x1",network_width/4*3).attr("x2",network_width/4*3).attr("y1",0).attr("y2",network_height).attr("stroke", "#ccc").attr("stroke-dasharray", "2,5");
    network_svg.append("line").attr("y1",network_height/2).attr("y2",network_height/2).attr("x1",0).attr("x2",network_width).attr("stroke", "#ccc").attr("stroke-dasharray", "2,5");
    network_svg.append("line").attr("y1",network_height/4).attr("y2",network_height/4).attr("x1",0).attr("x2",network_width).attr("stroke", "#ccc").attr("stroke-dasharray", "2,5");
    network_svg.append("line").attr("y1",network_height/4*3).attr("y2",network_height/4*3).attr("x1",0).attr("x2",network_width).attr("stroke", "#ccc").attr("stroke-dasharray", "2,5");

    var network_graph = network_svg.append("g")
        .attr("class", "data");

    network_force
        .nodes(network_nodes)
        .links(network_links)
        .start();

    var network_link = network_graph.selectAll("line.link")
        .data(network_links)
      .enter().append("line")
        .attr("class", "link");

    var opacityMax=1;
    var opacityMin=0.3;
    
    function linearRelation(px,py,qx,qy,y)
    {
	    var a=py-px*(qy-py)/(qx-px);
    	var k=(qy-py)/(qx-px);
    	var x=(y-a)/k;
	    	xLimited=Math.min(qx,Math.max(px,x));
    	return xLimited;	
    }
    
    var opacityForLink=function(link)
    {
	    var o=opacityMin;
    	var O=opacityMax;
    	var m=min;
    	var M=max;
    	var d=distanceFromAge(link.age)
    	return linearRelation(o,M,O,m,d);
    }
//    network_link.style("stroke-opacity",opacityForLink)

    var forceDrag = network_force.drag()
    .on("dragstart", forceDragStart);
    
    function forceDragStart(d) { 
        d3.event.sourceEvent.stopPropagation();
        d.fixed = true;
        d3.select(this).classed("fixed", true);
    }
    
    var network_node = network_graph.selectAll("g.node")
        .data(network_nodes)
      .enter().append("svg:g")
        .attr("class", "node")
        .call(forceDrag);
        
	var opacityForNode=function(node)
    {
	    var o=opacityMin;
    	var O=opacityMax;
    	var ageMin=0;
    	var ageMax=daysToMs(365);
    	return linearRelation(o,ageMax,O,ageMin,node.age);
    }

//  These lines are useful for logging    
//	for (var i=0;i<network_nodes.length;i++){
//		var node=network_nodes[i];
//		console.log("age:"+msToDays(node.age)+"; opacity:"+opacityForNode(node))
//	}
//    for (var i=0;i<network_links.length;i++){
//    	var link=network_links[i];
//		console.log("age:"+msToDays(link.age)+" distance:"+distanceFromAge(link.age)+" opacity:"+opacityForLink(link))
//	}

//    function textDxPosition(node) {
//    console.log(node);
//        if (node.cx >= network_width/2){ 
//            return 10; 
//        } else { 
//            return -150; 
//        }
//    }

    network_node.append("svg:circle")
      .attr("class", "node")
      .attr("r", function(d) { return (d.is_source) ? 9 : 9; })
      .style("fill", function (d) { return (d.is_source) ? d3.hsl('#ABDC0A') : d3.hsl('#ABDC0A'); })
      .style("stroke", function(d) { return (d.is_source) ? d3.hsl('#fff') : d3.hsl('#fff'); })
      .style("fill-opacity", opacityForNode)
      .style("stroke-opacity", opacityForNode);

    network_node.append("svg:a")
        .attr("xlink:href",function(d) { return d.uri })
        .append("svg:text")
        .attr("class", "nodetext")
        .attr("dx", 10)
        .attr("dy", 0)
        .text(function(d) { return replaceHtmlSpecialChars((d.name).substring(0,20)+"...")})
        .attr("fill-opacity", opacityForNode);

    network_force.on("tick", function() {
        network_link.attr("x1", function(d) { return d.source.x; })
            .attr("y1", function(d) { return d.source.y; })
            .attr("x2", function(d) { return d.target.x; })
            .attr("y2", function(d) { return d.target.y; });

        network_node.attr("cx", function(d) { return d.x; })
            .attr("transform", function(d) { return "translate(" + d.x + "," + d.y + ")"; })
            .attr("cy", function(d) { return d.y; });
            
    });
    
//	function testDaysToMs()
//	{
//		assert(daysToMs(0)==0)
//		assert(daysToMs(1)==8.64e+7)
//		assert(msToDays(8.64e+7)==1)
//		
//	}
//	testDaysToMs();
  }

})(jQuery);

//function assert(condition, message) {
//    if (condition) {
//    	console.log("test passed");
//    }
//    else
//    {
//        throw message || "Assertion failed";
//    }
//    
//}



