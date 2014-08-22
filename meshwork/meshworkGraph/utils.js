function dateEquals(date1,date2)
{
	if (date1==null || date2==null)
	{
		return false;	
	}
	return !(date1>date2) && !(date1<date2);
}