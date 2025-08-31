#include<stdio.h>
void main(){
	int l,w,h,area;
	printf("Enter your length,width,height:\n");
	scanf("%d\n %d\n %d\n",&l,&w,&h);
	area = 2*(l*w + w*h + l*h);
	printf("Area of rectangular prism is %d",area);
}
