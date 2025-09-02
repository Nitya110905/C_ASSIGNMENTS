// Find area of Triangle Formula : A = 1/2 × b × h 

#include<stdio.h>
void main(){
	int b,h;
	float area;
	printf("Enter your base and height for triangle\n");
	scanf("%d\n %d",&b,&h);
	area = 0.5*b*h;
	printf("Area of triangle is %f",area);
}
