// Accept monthly salary from the user and deduct 10% 
// insurance premium, 10% loan installment find out of 
// remaining salary. 


#include<stdio.h>

int main(){
    float salary;
    printf("Enter your monthly salary : ");
    scanf("%f",&salary);

    float annual_income = salary * 12;

    float insurance_premium = annual_income * 10/100;

    float loan_installment = annual_income * 10/100;

    float net_income = annual_income - insurance_premium - loan_installment;

    printf("Your net Salary is %.2f",net_income);

    return 0;
}