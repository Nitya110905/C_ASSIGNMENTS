// WAP to show 
// i. Monday to Sunday using switch case 
// ii. Vowel or Consonant using switch case 



#include<stdio.h>
#include <ctype.h>
void main()
{
// i.
	char c;
	printf("Kindly select from the given menu");
	printf("Enter\n M for Monday\n T for Tuesday\n W for Wednesday\n t for Thursday\n F for Friday\n S for Staurday\n s for Sunday");
	scanf("%c",&c);
	switch (c)
	{
		case 'M':
		printf("Monday");
		break;
		case 'T':
		printf("Tueday");
		break;
		case 'W':
		printf("Wednesday");
		break;
		case 't':
		printf("Thursday");
		break;
		case 'F':
		printf("Friday");
		break;
		case 'S':
		printf("Saturday");
		break;
		case 's':
		printf("Sunday");
		break;
		default:
		printf("Kindly select from the respected menu");
	}

    char c1;
    printf("Enter a letter a-z : ");
	scanf(" %c",&c1);

    if (isalpha(c1)) {
        switch (c1) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("'%c' is a Vowel.\n", c1);
                break;
            default:
                printf("'%c' is a Consonant.\n", c1);
                break;
        }
    } else {
        printf("'%c' is not an alphabet character.\n", c1);
    }


}
