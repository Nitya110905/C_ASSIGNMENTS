// Write a C Program to Print the 
// Multiplication Table of N i. E.g. 5 * 1 = 
// 5 
// ii. 5 * 2 = 10 
// 1. . 
// 2. . 
// iii. 5 * 10 = 50 

#include<stdio.h>

int main (){
    int n;

    printf("Enter the number to get table :");
    scanf("%d",&n);

    for(int i = 1; i <=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}