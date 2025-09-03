// Check Number Is Positive or Negative 

#include<stdio.h>

int main (){
    int num;
    printf("Enter a no. : ");

    scanf("%d",&num);
    if(num > 0){
        printf("%d is positive",num);
    }
    else if (num == 0){
        printf("%d is zero",num);
    }
    else{
        printf("%d is Negative",num);
    }
}