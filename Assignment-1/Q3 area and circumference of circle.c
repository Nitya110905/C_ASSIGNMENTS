#include<stdio.h>
#include<math.h>
void main(){
	int r;
	float pie=3.14,area,c;
	printf("Enter Your desired radius\n");
	scanf("%d",&r);
	area = pie*r*r;
	c = 2*pie*r;
	printf("Your area=%f and circumference=%f",area,c);
}
