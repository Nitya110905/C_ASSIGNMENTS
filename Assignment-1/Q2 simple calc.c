#include<stdio.h>
void main()
{
	int a,b,sum,sub,multi,div,mod;
	printf("Enter a no.");
	scanf("%d",&a);
	printf("Enter a no. again");
	scanf("%d",&b);
	sum=a+b;
	printf("Result is %d\n",sum);
	sub=a-b;
    printf("Result is %d\n",sub);
	multi=a*b;
	printf("Result is %d\n",multi);
	div=a/b;
	printf("Result is %d\n",div);
	mod=a%b;
	printf("Result is %d\n",mod);
	a++;
	printf("Result is %d\n",a);
	b--;
	printf("Result is %d\n",b);
}
