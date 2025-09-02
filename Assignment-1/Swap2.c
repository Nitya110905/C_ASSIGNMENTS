// WAP to calculate swap 2 numbers with using of 
// multiplication and division.

#include<stdio.h>

int main() {
    int num1 , num2;

    printf("Enter two numbers : \n");

    scanf("%d %d",&num1,&num2);

    printf("Before Swap : %d , %d \n",num1,num2);

// Using two variables

    num1 = num1 * num2;

    num2 = num1 / num2;

    num1 = num1 / num2;

    printf("After Swap : %d , %d ",num1,num2);

    return 0;

}