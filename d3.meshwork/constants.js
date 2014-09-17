
var meshwork_mesiVisualizzati=18;
var meshwork_graphStartDate=new Date(new Date().getTime()-meshwork_mesiVisualizzati*30*24*60*60*1000);  

var meshwork_width = 1000,
    meshwork_height = 300;

var meshwork_axisHeight=30;
var meshwork_margin = 10;

var meshwork_circleRadius=5;

var meshwork_textWidth=200;

var meshwork_nodeMinimumDays=10

var meshwork_nodesMinimumPixelDistance=6;
var meshwork_nodesMinimumPixelDistanceBackLash=0.4;

var meshwork_unclickAlpha=0.006;
var meshwork_unclickFriction=0.1;

function meshwork_panelContentGenerator(node)
{
	var html="<h1>"+node.name+"</h1>"+
			"<p><a href=\""+node.url+"\">Informazioni</p>"+
			"<p>Nascita:"+node.start+"</p>";
	if (node.end!=null && node.end.getTime()<now.getTime())
		html=html+"<p>Chiusura:"+node.end+"</p>";
	return html;      					
}
