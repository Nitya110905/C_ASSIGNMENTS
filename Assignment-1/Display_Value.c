// Write a C program to read the value of an integer m and display 
// the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 
// when m is less than 0

#include<stdio.h>

int main (){
    int n , m;
    printf("Enter an integer : ");

    scanf("%d",&m);
    if(m>0){
        n = 1;
        printf("Value of n : %d",n);
    }
    else if (m == 0){
        n = 0;
        printf("Value of n : %d",n);
    }
    else{
        n = -1;
        printf("Value of n : %d",n);
    }
}