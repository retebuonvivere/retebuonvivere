/**
 * @file
 * D3 Module Depedencies library
 */

(function($) {
  Drupal.d3.network = function (select, settings) {
//    var width   = (settings.config.width || 300),
    var network_width = 	$("#graphapi-default").width();
//        height  = (settings.config.height || 300),
    var network_height  = Math.max($(window).height()*0.65,320);
    
    var network_nodes   = settings.nodes,
        network_links   = settings.links,
        z       = d3.scale.ordinal().range(["blue", "red", "orange", "green"]),
        k       = Math.sqrt(network_nodes.length / (network_width * network_height)),
        color   = d3.scale.category20();

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
    if (settings.linkDistance) {
      force.linkDistance(settings.linkDistance)
    }

    for (var i=0;i<network_links.length;i++){
		console.log("network_links[i].color "+network_links[i].color);
	}

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

  }

})(jQuery);

