// Calculate person’s Annual 
// salary

#include<stdio.h>

int main(){
    float salary;
    printf("Enter your monthly salary : ");
    scanf("%f",&salary);

    float annual_income = salary * 12;

    printf("Your annual salary is : %f",annual_income);

    return 0;
}