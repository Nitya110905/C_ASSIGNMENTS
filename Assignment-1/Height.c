// WAP to accept the height of a person in centimeters and 
// categorize the person according to their height.

#include<stdio.h>

int main (){
    int height;
    printf("Enter your height in cm : ");

    scanf("%d",&height);
    if(height<=0){
        printf("Invalid");
    }
    else if (height < 150){
        printf("Short");
    }
    else{
        printf("Tall");
    }
}