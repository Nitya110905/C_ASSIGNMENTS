#include<stdio.h>
void main()
{
	int min,hour,seconds;
	printf("Enter your minutes");
	scanf("%d",&min);
	hour=min/60;
	seconds=min*60;
	printf("Time : %d hours and %d seconds",hour,seconds);
}
