// Accept 5 employees name and 
// salary and count average and total salary

#include<stdio.h>

int main(){
    char name[50];
    float salary, avg, total_salary = 0;
    for (int i = 1; i <= 5 ; i++){
        printf("Enter the name of %d Employee : ",i);
        scanf("%s",name);
        printf("Enter the salary of %s Employee : ",name);
        scanf("%f",&salary);
        total_salary = total_salary + salary;
    }
    avg = total_salary/5;

    printf("Total Salary : %.2f\n",total_salary);
    printf("Average salary : %.2f ",avg);

    return 0;
}