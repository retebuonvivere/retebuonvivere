function textBoxKeyPress(e,form)
{
	var searchWord=document.getElementById("searchBox").value;
	d3.selectAll(".searched").classed("searched",false);
	if (searchWord.length<1) return;
	
	var re=new RegExp(searchWord,"i");
	d3.selectAll(".node").filter(function(d){
		return 	(replaceHtmlSpecialChars(d.name)).match(re) != null;
	}).classed("searched",true);
}
