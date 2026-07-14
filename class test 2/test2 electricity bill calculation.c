void main()
{
	int unit;
	float bill;
	
	printf("enter the no of units:");
	scanf("%d",&unit);
	
	if(unit>=1 && unit<=50)
	{
		bill=unit*30;
	}
	else if(unit>=51 && unit<=150)
	{
		bill=unit*40;
	}
    else if(unit>=151)
	{
		bill=unit*50;
	}
	
	printf("electricity bill=%f rs.",bill);
}