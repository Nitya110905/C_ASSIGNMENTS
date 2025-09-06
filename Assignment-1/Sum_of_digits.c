// Write a program make a summation of given number (E.g., 
// 1523 Ans: -11)

#include<stdio.h>

int main(){
    int sum = 0 , rem , num;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    printf("%d",sum);

    return 0;
}