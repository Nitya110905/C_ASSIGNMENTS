//  Accept 2 numbers from user and swap 2 numbers with 
// using 3rd variable and without using 3rd variable 

#include<stdio.h>

int main() {
    int num1 , num2 , swap;

    printf("Enter two numbers : \n");

    scanf("%d %d",&num1,&num2);

    printf("Before Swap : %d , %d \n",num1,num2);
// Using three variables
    swap = num1;

    num1 = num2;

    num2 = swap;

    printf("After Swap : %d , %d \n",num1,num2);

// Using two variables

    num1 = num1 + num2;

    num2 = num1 - num2;

    num1 = num1 - num2;

    printf("After Swap : %d , %d ",num1,num2);

    return 0;

}