function textBoxKeyPress()
{
	var searchWord=document.getElementById("searchBox").value;
	d3.selectAll(".searched").classed("searched",false);
	if (searchWord.length<1) return;
	
	var re=new RegExp(searchWord,"i");
	d3.selectAll("g.node").filter(function(d){
	console.log(d);
		return 	(replaceHtmlSpecialChars(d.name)).match(re);
	}).classed("searched",true);
}
