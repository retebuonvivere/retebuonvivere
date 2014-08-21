


var now=new Date();

var pixelPerMs=width/(now.getTime()-graphStartDate.getTime());

function xForDate(date)
{
	return (date.getTime()-graphStartDate.getTime())*pixelPerMs;
}
      

var color = d3.scale.category20();

var force = d3.layout.force()
    .charge(-120)
    .linkDistance(100)
    .size([width, height]);

var svg = d3.select("body").append("svg")
    .attr("width", width)
    .attr("height", height);
    
    
var nodesFile="nodesSmall.json";
var edgesFile="edgesSmall.json";


var nodes;
d3.json(nodesFile,function(error,parsed){
//		console.log(error);
//		console.log(parsed);
	
	nodes=parsed;
	
	var edgesOriginal;

	d3.json(edgesFile,function(error,parsed){
		edgesOriginal=parsed;
		var nodesIdMap=d3.map()

		for (var i=0;i<nodes.length;i++)
		{
			var node=nodes[i];
			nodesIdMap.set(node["id"],i);
			if (isNaN(new Date(node["start"]).getTime()))
			{
			    node["start"]=graphStartDate;
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
// manca il caso in cui la data di fine sia uguale a quella di inizio, ma solo perché automaticamente settata da drupal. Non possiamo usare == con le dates
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
			
			var startEdge={
							"source":	nodesIdMap.get(edge["source"]),
							"target":	nodesIdMap.get(edge["target"]),
							"date":		edgeStartDate,
							"type":		"start",
							"label":	edge["label"],
							"url":		edge["url"]
							};
			edges.push(startEdge);
			var edgeEndDate=new Date(edge["end"]);

			if (!dateEquals(edgeStartDate,edgeEndDate))
			{
			  var endEdge={
							  "source":	nodesIdMap.get(edge["target"]),
							  "target":	nodesIdMap.get(edge["source"]),
							  "date":	edgeEndDate,
							  "type":	"end",
							  "label":	edge["label"],
							  "url":	edge["url"]
							  };
			  edges.push(endEdge);
			}
		}


		var graphData= {
							"links":edges,
							"nodes":nodes
						}


		drawGraph(graphData);

	})
})



