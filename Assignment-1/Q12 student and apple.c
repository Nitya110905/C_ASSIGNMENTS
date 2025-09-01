// Accept number of students from user. I need to give 
// 5 apples to each student. How many apples are required?

#include<stdio.h>
void main(){
	int a,total;
	printf("Enter the no. of students");
	scanf("%d",&a);
	total = a*5;
	printf("You need a total %d apples",total);
	
}
