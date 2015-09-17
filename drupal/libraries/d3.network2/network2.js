(function($) {
  Drupal.d3.network2 = function (select, settings) {
    var network_width = $("#graphapi-default").width();
    var network_height;
    if ($("#graphapi-default").width() > 360)
        network_height = Math.max($(window).height()*0.65,320);
    else
        network_height = settings.config.height;

    var scaleFactor = 1;
    var translation = [0,0];

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
    
 //    function setStartEnd(object, timefield)
	// {
	// 	var s=object[timefield];
	// 	if (s==null)
	// 	{
	// 		object.start=new Date(0,0,0,0,0,0);
	// 		object.end=now;
	// 	}
	// 	else
	// 	{
	// 		var dateComponents=s.split(",");
	// 		object.start=new Date(dateComponents[0]);
	// 		object.end=new Date(dateComponents[1]);
	// 	}
 //        console.log(s, object.start, object.end);
	// }

 
	// function setAge(object)
	// {
	// 	if (!dateValid(object.start) || !dateValid(object.end))
	// 	{
	// 		object.age=daysToMs(365);
	// 	}
	// 	else if (dateEquals(object.start,object.end) || object.end.getTime()>now.getTime())
	// 	{
	// 		object.age=1;
	// 	}
	// 	else 
	// 	{
	// 		object.age=now.getTime()-object.end.getTime();
	// 	}
	// }
    
    // var maxDays=200;	
	// var min=70; /* Min and max distance */
	// var max=260;
	// var b=Math.E;
	// var k=daysToMs(maxDays)/Math.log(max-min);

	// var distanceFromAge=function(age){
 //    	var v=Math.pow(b,age/k)+min;
 //    	v=Math.min(max,Math.max(min,v));
 //    	return v;
 //    };
    
 //    var distanceForLink=function(link){
 //    	return distanceFromAge(link.age);
 //    }

    var network_force = d3.layout.force()
      .size([network_width, network_height])
      .charge(-200)
      .friction(0.8)
      .gravity(0.1)
      .linkDistance(110)      
      .on("tick", tick);


    var zoomListener = d3.behavior.zoom()
        .scaleExtent([-10, 10])
        .on("zoom", zoomHandler);
    
    function zoomHandler() {
        scaleFactor = d3.event.scale;
        translation = d3.event.translate;
//        console.log("zoom: "+ d3.event.translate, d3.event.scale);
        tick();
    }
    
    var network_nodes = settings.nodes,
        network_links = settings.links;



 //    for (var i=0;i<network_links.length;i++){
 //    	var link=network_links[i];
	// 	setStartEnd(link,"content");
	// 	setAge(link);
	// }


	// for (var i=0;i<network_nodes.length;i++){
	// 	var node=network_nodes[i];
	// 	setStartEnd(node,"content");
	// 	setAge(node);	
	// }	
    
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

    var minWeight = d3.min(network_links, function(d) { return d.color; });
    var maxWeight = d3.max(network_links, function(d) { return d.color; });
    var normalizeWeight = d3.scale.linear()
        .domain([1,maxWeight])
        .range([0.1,1]);
    
    var normInvertedWeight = d3.scale.linear()
        .domain([1,maxWeight])
        .range([1,0.1]);
    
    network_force
        .nodes(network_nodes)
        .links(network_links)
        .linkDistance(function(l){ return normInvertedWeight(l.color)*120+8;})
        //.linkStrength(function(l){ return normalizeWeight(l.color);})
        .start();


    var network_link = network_graph.selectAll("line.link")
        .data(network_links)
      .enter().append("line")
        .attr("class", "link")
        //graphapi_color =>  number of collaborations per relation => relation weight
        .attr("stroke", "#999")
        .attr("stroke-width", function(d){
            return (normalizeWeight(d.color)*10);             
        })
        .style("stroke-opacity", function(d){
            return normalizeWeight(d.color)+0.1;
        });

    
    function linearRelation(px,py,qx,qy,y)
    {
	    var a=py-px*(qy-py)/(qx-px);
    	var k=(qy-py)/(qx-px);
    	var x=(y-a)/k;
	    	xLimited=Math.min(qx,Math.max(px,x));
    	return xLimited;	
    }
    
    // var opacityForLink=function(link)
    // {
	   //  var o=opacityMin;
    // 	var O=opacityMax;
    // 	var m=min;
    // 	var M=max;
    // 	var d=distanceFromAge(link.age)
    // 	return linearRelation(o,M,O,m,d);
    // }
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
    
    var opacityMax=1;
    var opacityMin=0.2;
        
	// var opacityForNode=function(node)
 //    {
	//     var o=opacityMin;
 //    	var O=opacityMax;
 //    	var ageMin=0;
 //    	var ageMax=daysToMs(365);
 //    	return linearRelation(o,ageMax,O,ageMin,node.age);
 //    }

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
      .attr("r", 9);
      //.style("fill-opacity", opacityForNode)
      //.style("stroke-opacity", opacityForNode);
      
    network_node.append("title")
	  .text(function(d) {return replaceHtmlSpecialChars(d.name);});

    network_node.append("svg:a")
        .attr("xlink:href",function(d) { return d.uri })
        .append("svg:text")
        .attr("class", "nodetext")
        .attr("dx", 10)
        .attr("dy", 0)
        .text(function(d) { return replaceHtmlSpecialChars((d.name).substring(0,20)+"...")})
        .attr("fill-opacity", 0.9);

    function tick() {
        network_link.attr("x1", function(d) { return translation[0] + scaleFactor*d.source.x; })
            .attr("y1", function(d) { return translation[1] + scaleFactor*d.source.y; })
            .attr("x2", function(d) { return translation[0] + scaleFactor*d.target.x; })
            .attr("y2", function(d) { return translation[1] + scaleFactor*d.target.y; });

        network_node.attr("transform", function(d) { return "translate(" + (translation[0] + scaleFactor*d.x) + "," + (translation[1] + scaleFactor*d.y) + ")"; });
    }
            
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



