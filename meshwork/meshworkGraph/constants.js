var graphStartDate=new Date(2005,1,1,0,0,0);  

var width = 900,
    height = 700;

var nodeMinimumDays=10

var nodesMinimumPixelDistance=8;
var nodesMinimumPixelDistanceBackLash=0.4;

function panelContentGenerator(node)
{
	var html="<h1>"+node.name+"</h1>"+
			"<p><a href=\""+node.url+"\">Informazioni</p>"+
			"<p>Nascita:"+node.start+"</p>";
	if (node.end.getTime()<now.getTime())
		html=html+"<p>Chiusura:"+node.end+"</p>";
	return html;      					
}
