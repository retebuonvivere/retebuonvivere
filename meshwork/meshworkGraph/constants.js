
var mesiVisualizzati=18;
var graphStartDate=new Date(new Date().getTime()-mesiVisualizzati*30*24*60*60*1000);  

var width = 900,
    height = 700;
    
var circleRadius=5;

var nodeMinimumDays=10

var nodesMinimumPixelDistance=5;
var nodesMinimumPixelDistanceBackLash=0.4;

function panelContentGenerator(node)
{
	var html="<h1>"+node.name+"</h1>"+
			"<p><a href=\""+node.url+"\">Informazioni</p>"+
			"<p>Nascita:"+node.start+"</p>";
	if (node.end!=null && node.end.getTime()<now.getTime())
		html=html+"<p>Chiusura:"+node.end+"</p>";
	return html;      					
}
