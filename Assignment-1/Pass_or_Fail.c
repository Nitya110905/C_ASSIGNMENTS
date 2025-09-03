// Accept marks from user and check pass or fail 

#include<stdio.h>

int main (){
    int marks;
    printf("Enter your marks between 0-100 : ");

    scanf("%d",&marks);
    if(marks > 100 || marks < 0){
        printf("Invalid!!!");
    }
    else if (marks > 33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}