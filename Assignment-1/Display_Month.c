// Accept month number and display month name 
// Accept the input month number and print number of 
// days in that month.


#include<stdio.h>
void main()
{
	int month;
    printf("Enter a number between 1-12 to get days of the entered number month :");
    scanf("%d",&month);
	switch (month)
	{
		case 1:
		printf("January");
        printf("\n31 days");
		break;
		case 2:
		printf("February");
        printf("\n28 or 29 days depending on year.");
		break;
		case 3:
		printf("March");
        printf("\n31 days");
		break;
		case 4:
		printf("April");
        printf("\n30 days");
		break;
		case 5:
		printf("May");
        printf("\n31 days");
		break;
		case 6:
		printf("June");
        printf("\n30 days");
		break;
		case 7:
		printf("July");
        printf("\n31 days");        
		break;
        case 8:
		printf("August");
        printf("\n31 days");
		break;
        case 9:
		printf("September");
        printf("\n30 days");
		break;
        case 10:
		printf("October");
        printf("\n31 days");
		break;
        case 11:
		printf("November");
        printf("\n30 days");
		break;
        case 12:
		printf("December");
        printf("\n31 days");
		break;
		default:
		printf("Kindly select from the respected menu");
	}
}