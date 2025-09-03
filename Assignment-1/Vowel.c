// Find the Character Is Vowel or Not

#include<stdio.h>
int main()
{
	char A;
	printf("Enter your alphabet");
	scanf("%c",&A);
	if (A=='a' || A=='e' || A=='i' || A=='o' || A=='u')
	{
		printf("%c is a VOWEL",A);
	}
	else
	{
		printf("%c is a CONSONANT",A);
	}
    return 0;
}
