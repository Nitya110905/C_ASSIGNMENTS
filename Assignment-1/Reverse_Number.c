// WAP to print number in reverse order e.g.: number = 
// 64728 ---> reverse = 82746 


#include<stdio.h>

int main(){
    int num,rev;

    printf("Enter the number you want to reverse : ");
    scanf("%d",&num);

    while(num > 0){
        rev = num % 10;
        num = num/10;
        printf("%d",rev);
    }
    return 0;
}