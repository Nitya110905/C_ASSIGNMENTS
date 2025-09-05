// WAP to input the week number and print week day. 

#include<stdio.h>
void main()
{
	int num;
	printf("Kindly select from the given menu");
	printf("Enter\n 1 for Monday\n 2 for Tuesday\n 3 for Wednesday\n 4 for Thursday\n 5 for Friday\n 6 for Staurday\n 7 for Sunday");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tueday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("Saturday");
		break;
		case 7:
		printf("Sunday");
		break;
		default:
		printf("Kindly select from the respected menu");
	}
}
