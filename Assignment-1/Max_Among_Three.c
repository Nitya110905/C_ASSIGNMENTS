// WAP to find maximum number among 3 numbers using 
// ternary operator 


#include<stdio.h>

int main(){
    int num1 , num2 , num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    (num1>num2) ? ((num1>num3)?printf("%d",num1):printf("%d",num3)) : ((num2>num3)?printf("%d",num2) : printf("%d",num3)); 
}