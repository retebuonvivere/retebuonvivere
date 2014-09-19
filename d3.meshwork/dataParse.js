console.log("loading dataParse.js");

var meshwork_now=new Date();

function meshwork_main($)
{

	var nodesFile="sites/default/files/graph_data/nodes.json";
	var edgesFile="sites/default/files/graph_data/edges.json";
	$.getJSON(nodesFile,function(parsed){
	//		console.log(error);
	//		console.log("parsed = " + parsed);
	
		var nodes=parsed;
	
		var edgesOriginal;

		$.getJSON(edgesFile,function(parsed){
			edgesOriginal=parsed;
			var nodesIdMap=d3.map();
			var neverStartedNodes=d3.map();

			for (var i=0;i<nodes.length;i++)
			{
				var node=nodes[i];
				node["clicked"]=false;
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
					node["end"]=null;
				}
				else
				{
					node["end"]=new Date(node["end"])
				}

				if (dateEquals(node["end"],node["start"]))
				{
					node["end"]=null;
				}
				if (node["end"]!=null && node["start"]!=null)
				{
					node["end"]=new Date(Math.max(node["end"].getTime(),
	  					node["start"].getTime()+meshwork_nodeMinimumDays*24*60*60*1000));
	  			}
			}
//			console.log(neverStartedNodes.values())
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
//					console.log(nodes[sourceNodeIndex]);
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
					
					// todo: se un nodo inizia dopo -> spostiamo l'inizio a edgeStartDate
					nodes[targetNodeIndex]["start"]=new Date(Math.min(nodes[targetNodeIndex]["start"].getTime(),edgeStartDate.getTime()));
					nodes[sourceNodeIndex]["start"]=new Date(Math.min(nodes[sourceNodeIndex]["start"].getTime(),edgeStartDate.getTime()));
					
					
					
					var edgeEndDate=new Date(edge["end"]);
					if (dateEquals(edgeEndDate,edgeStartDate))
					{
						continue;
					}		
					edgeEndDate=new Date(Math.max(edgeEndDate.getTime(),
	  					edgeStartDate.getTime()+meshwork_nodeMinimumDays*24*60*60*1000));

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

						// todo: se un nodo finisce prima -> spostiamo la fine a edgeEndDate
						if (nodes[targetNodeIndex]["end"]!=null)
						{
							nodes[targetNodeIndex]["end"]=new Date(Math.max(nodes[targetNodeIndex]["end"].getTime(),edgeEndDate.getTime()));
						}
						if (nodes[sourceNodeIndex]["end"]!=null)
						{
							nodes[sourceNodeIndex]["end"]=new Date(Math.max(nodes[sourceNodeIndex]["end"].getTime(),edgeEndDate.getTime()));
						}

					}
				}
			}
			
			neverStartedNodes.forEach(function(i,n){
//				console.log(n);
				if (n["start"]==null)
				{
					n["start"]=meshwork_graphStartDate;
					n["nodeType"]="org-neverStarted";
				}			
			})


			meshwork_graphData= {
								"links":edges,
								"nodes":nodes
							}

			console.log(meshwork_graphData);
			
			meshwork_drawGraph();

		});
	});
}
