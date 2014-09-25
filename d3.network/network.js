/**
 * @file
 * D3 Module Depedencies library
 */
var distanceFromAge;
(function($) {
  Drupal.d3.network = function (select, settings) {
//    var width   = (settings.config.width || 300),
    var network_width = 	$("#graphapi-default").width();
    var now=new Date();
    
    	
	var min=50;
	var max=300;
	var b=Math.E;
	var k=daysToMs(365)/Math.log(max-min);

	distanceFromAge=function(age){
    	var v=Math.pow(b,age/k)+min;
 //   	v=Math.min(max,Math.max(min,v));
    	return v;
    };
    
    var distanceForLink=function(link){
    	return distanceFromAge(link.age);
    }

//        height  = (settings.config.height || 300),
    var network_height  = Math.max($(window).height()*0.65,320);
    
    var network_nodes   = settings.nodes,
        network_links   = settings.links;

    // Add an attribute to each node that is a source node so that we can
    // use that attribute to style them differently.
    network_links.map(function(d) { network_nodes[d.target].is_source = true; });

    var network_force = d3.layout.force()
      .size([network_width, network_height])
      .charge(-100)
      .distance(100)
      .friction(.94)
      .gravity(.01);

    // additional settings for the advanced force directed graphs
    if (settings.gravity) {
      force.gravity(settings.gravity)
    }
    if (settings.friction) {
      force.friction(settings.friction)
    }
    if (settings.theta) {
      force.theta(settings.theta)
    }
    if (settings.charge) {
      force.charge(settings.charge)
    }

    for (var i=0;i<network_links.length;i++){
    	var link=network_links[i];
    	console.log("=================================")

		console.log("network_links[i].color "+link.color);
		var dateComponents=link.color.split(",");
		link.start=new Date(dateComponents[0]);
		link.end=new Date(dateComponents[1]);
		if (!dateValid(link.start) || !dateValid(link.end))
		{
			link.age=daysToMs(365);
		}
		else if (dateEquals(link.start,link.end) || link.end.getTime()>now.getTime())
		{
			link.age=1;
		}
		else 
		{
			link.age=now.getTime()-link.end.getTime();
		}
		console.log("age:"+msToDays(link.age)+" distance:"+distanceFromAge(link))
	}
	
    network_force.linkDistance(distanceForLink)



    var network_svg = d3.select('#' + settings.id).append("svg")
        .attr("width", network_width)
        .attr("height", network_height);

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

    var network_node = network_graph.selectAll("g.node")
        .data(network_nodes)
      .enter().append("svg:g")
        .attr("class", "node")
        .call(network_force.drag);

    network_node.append("svg:circle")
      .attr("class", "node")
      .attr("r", function(d) { return (d.is_source) ? 9 : 9; })
      .style("fill", function (d) { return (d.is_source) ? d3.hsl('#378722') : d3.hsl('#ABDC0A'); })
      .style("stroke", function(d) { return (d.is_source) ? d3.hsl('#fff') : d3.hsl('#fff'); });

    network_node.append("svg:a")
        .attr("xlink:href",function(d) { return d.uri })
        .append("svg:text")
        .attr("class", "nodetext")
        .attr("dx", 10)
        .attr("dy", "1")
        .text(function(d) { return d.name });

    network_force.on("tick", function() {
      network_link.attr("x1", function(d) { return d.source.x; })
          .attr("y1", function(d) { return d.source.y; })
          .attr("x2", function(d) { return d.target.x; })
          .attr("y2", function(d) { return d.target.y; });

      network_node.attr("cx", function(d) { return d.x; })
          .attr("transform", function(d) { return "translate(" + d.x + "," + d.y + ")"; })
          .attr("cy", function(d) { return d.y; });
    });
	function testDaysToMs()
	{
		assert(daysToMs(0)==0)
		assert(daysToMs(1)==8.64e+7)
		assert(msToDays(8.64e+7)==1)
		
	}

	function testDistanceFunction1()
	{
		assert(distanceFromAge(daysToMs(0))<60);
		assert(distanceFromAge(daysToMs(180))<100);
		assert(distanceFromAge(daysToMs(300))>140);
		assert(distanceFromAge(daysToMs(365))>290);
		console.log(distanceFromAge(daysToMs(1.1574074074074074e-8)));
		assert(distanceFromAge(daysToMs(1.1574074074074074e-8))<60);
	}
	testDaysToMs()
	testDistanceFunction1();
  }

})(jQuery);

function dateEquals(date1,date2)
{
	if (date1==null || date2==null)
	{
		return false;	
	}
	return !(date1>date2) && !(date1<date2);
};

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

function assert(condition, message) {
    if (condition) {
    	console.log("test passed");
    }
    else
    {
        throw message || "Assertion failed";
    }
    
}



