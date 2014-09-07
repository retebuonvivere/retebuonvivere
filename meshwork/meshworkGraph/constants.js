
var mesiVisualizzati=18;
var graphStartDate=new Date(new Date().getTime()-mesiVisualizzati*30*24*60*60*1000);  

var width = 1000,
    height = 700;
    
var circleRadius=5;

var textWidth=100;

var nodeMinimumDays=10

var nodesMinimumPixelDistance=6;
var nodesMinimumPixelDistanceBackLash=0.4;

var unclickAlpha=0.006;
var unclickFriction=0.1;

function panelContentGenerator(node)
{
	var html="<h1>"+node.name+"</h1>"+
			"<p><a href=\""+node.url+"\">Informazioni</p>"+
			"<p>Nascita:"+node.start+"</p>";
	if (node.end!=null && node.end.getTime()<now.getTime())
		html=html+"<p>Chiusura:"+node.end+"</p>";
	return html;      					
}
