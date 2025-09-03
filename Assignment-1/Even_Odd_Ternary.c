// WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main (){
    int num;
    printf("Enter your num : ");

    scanf("%d",&num);
    
    (num % 2 == 0)  ? printf("Even") : printf("Odd");

   return 0;
}