#include<stdio.h>
void main()
{
	int days,month,year;
	printf("Enter no. of years");
	scanf("%d",&year);
	month=year*12;
	printf("No. of month is %d\n",month);
	days=year*365;
	printf("No. of days is %d",days);
	
}
