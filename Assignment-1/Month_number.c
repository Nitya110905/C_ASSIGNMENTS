// Write a program in C to read any Month Number in integer 
// and display the number of days for this month.

#include<stdio.h>

int main(){
    int month;
    printf("Enter a number between 1-12 to get days of the entered number month :");
    scanf("%d",&month);
    if (month == 2){
        printf("28 or 29 days depending on year!!");
    }
    else if (month == 8 || month %2 != 0 ){
        printf("31 days");
    }
    else {
        printf("30 days");
    }

    return 0;

}