console.log("loading constants.js");
var meshwork_mesiVisualizzati=18;
var meshwork_graphStartDate=new Date(new Date().getTime()-meshwork_mesiVisualizzati*30*24*60*60*1000);  

var meshwork_width = 920,
    meshwork_height = 600;

var meshwork_axisHeight=30;
var meshwork_margin = 10;

var meshwork_circleRadius=5;

var meshwork_textWidth=200;

var meshwork_nodeMinimumDays=10;

var meshwork_nodesMinimumPixelDistance=7;
var meshwork_nodesMinimumPixelDistanceBackLash=0.4;

var meshwork_unclickAlpha=0.006;
var meshwork_unclickFriction=0.1;

var meshwork_fullscreenPanel="meshworkDiv";

function meshwork_panelContentGenerator(node,neighbours,edges)
{
	var html="<h3>"+node.name+"</h3>";
    if (node.nodeType=="org" && node.orgType=="N")
        html=html+"<p>Organizzazione</p>";
    if (node.nodeType=="project")
        html=html+"<p>Progetto/attività</p>";
	if (node.nodeType=="org" && node.orgType!="N")
        html=html+"<p>"+node.orgType+"</p>";
    html=html+"<p><a href=\""+node.url+"\" class=\"btn btn-primary\">Vai alla scheda</a></p>"+
			  "<p><span class=\"date-display-start\">"+node.start+"</span></p>";
	if (node.end!=null && node.end.getTime()<meshwork_now.getTime())
		html=html+"<p><span class=\"date-display-end\">"+node.end+"</p>";
    if (node.categories!="N")
        html=html+"<p><strong>Settori</strong>: "+node.categories+"...</p>";
        
    for (var i=0;i<neighbours.length;i++)
    {
    	html+="<h4>"+neighbours[i].name+"</h4>";
    }
    for (var i=0;i<edges.length;i++)
    {
    	html+="<h4>"+edges[i].url+"</h4>";
    }
	return html;      					
}
