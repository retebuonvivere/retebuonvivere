


var now=new Date();



    
    
var nodesFile="nodes.json";
var edgesFile="edges.json";

var nodes;

$(document).ready(function(){

	$.getJSON(nodesFile,function(parsed){
	//		console.log(error);
	//		console.log("parsed = " + parsed);
	
		nodes=parsed;
	
		var edgesOriginal;

		$.getJSON(edgesFile,function(parsed){
			edgesOriginal=parsed;
			var nodesIdMap=d3.map();
			var neverStartedNodes=d3.map();

			for (var i=0;i<nodes.length;i++)
			{
				var node=nodes[i];
				nodesIdMap.set(node["id"],i);
				if (isNaN(new Date(node["start"]).getTime()))
				{
					node["start"]=null;
					neverStartedNodes.set(i,node);
				}
				else
				{
					node["start"]=new Date(node["start"])
				}
				if (isNaN(new Date(node["end"]).getTime()))
				{
					node["end"]=now;
				}
				else
				{
					node["end"]=new Date(node["end"])
				}

				if (dateEquals(node["end"],node["start"]))
				{
					node["end"]=now;
				}
			}

			var edges=[];

			for (var i=0;i<edgesOriginal.length;i++)
			{
				var edge=edgesOriginal[i];
				var edgeStartDate=new Date(edge["start"])
			
				if (nodesIdMap.has(edge["source"]) && nodesIdMap.has(edge["target"]))
				{
//					console.log("edge")
//					console.log(edge)

//					console.log("creo lo startEdge")
					var sourceNodeIndex=nodesIdMap.get(edge["source"]);
					var targetNodeIndex=nodesIdMap.get(edge["target"]);
					
					if (neverStartedNodes.has(sourceNodeIndex))
					{
						var node=nodes[sourceNodeIndex];
						if (node["start"]==null)
						{
							node["start"]=edgeStartDate;
						}
						else
						{
							if (node["start"]>edgeStartDate)
							{
								node["start"]=edgeStartDate;
							}
						}
					}
					
					var startEdge={
									"source":	sourceNodeIndex,
									"target":	targetNodeIndex,
									"date":		edgeStartDate,
									"type":		"start",
									"label":	edge["label"],
									"url":		edge["url"]
									};
					edges.push(startEdge);
					var edgeEndDate=new Date(edge["end"]);

					if (!dateEquals(edgeStartDate,edgeEndDate))
					{
//						console.log("creo l' endEdge")
						var endEdge={
									  "source":	targetNodeIndex,
									  "target":	sourceNodeIndex,
									  "date":	edgeEndDate,
									  "type":	"end",
									  "label":	edge["label"],
									  "url":	edge["url"]
									  };
//						console.log(endEdge)
						edges.push(endEdge);
					}
				}
			}
			
			neverStartedNodes.forEach(function(i,n){
				if (n["start"]==null)
				{
					n["start"]=graphStartDate;
					n["nodeType"]="org-neverStarted";
				}			
			})


			var graphData= {
								"links":edges,
								"nodes":nodes
							}


			drawGraph(graphData);

		});
	});

});

