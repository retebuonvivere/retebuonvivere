


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
				if (node["end"]!=null && node["start"]!=null)
				{
					node["end"]=new Date(Math.max(node["end"].getTime(),
	  					node["start"].getTime()+nodeMinimumDays*24*60*60*1000));
	  			}
			}
			console.log(neverStartedNodes.values())
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
					console.log(nodes[sourceNodeIndex]);
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
					
					// todo: se il nodo target (proj) inizia dopo -> spostiamo l'inizio a edgeStartDate
					nodes[targetNodeIndex]["start"]=new Date(Math.min(nodes[targetNodeIndex]["start"].getTime(),edgeStartDate.getTime()));
					
					
					var edgeEndDate=new Date(Math.max(new Date(edge["end"]).getTime(),
	  					edgeStartDate.getTime()+nodeMinimumDays*24*60*60*1000));

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

					// todo: se il nodo target (proj) finisce prima -> spostiamo la fine a edgeEndDate
					nodes[targetNodeIndex]["end"]=new Date(Math.max(nodes[targetNodeIndex]["end"].getTime(),edgeEndDate.getTime()));


					}
				}
			}
			
			neverStartedNodes.forEach(function(i,n){
				console.log(n);
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

