// Calculate person’s insurance premium based on salary

#include <stdio.h>
#define PREMIUM_RATE 0.085 

int main() {
    double annualSalary;
    double premiumAmount;
    double monthlyPremium;

    printf("Please enter your total annual salary: ");

    // Read the number entered by the user and store it in the 'annualSalary' variable.
    // The '%lf' format specifier is used for reading a double.
    if (scanf("%lf", &annualSalary) != 1) {
        printf("Invalid input. Please enter a valid number for salary.\n");
        return 1; 
    }
    if (annualSalary < 0) {
        printf("Salary cannot be negative. Please run the program again with a valid salary.\n");
        return 1; 
    }


    premiumAmount = annualSalary * PREMIUM_RATE;
    monthlyPremium = premiumAmount / 12;
    
    printf("Calculation based on a premium rate of %.1f%%\n", PREMIUM_RATE * 100);
    printf("Your Annual Salary: $%.2f\n", annualSalary);
    printf("Your Total Annual Insurance Premium: $%.2f\n", premiumAmount);
    printf("Your Estimated Monthly Premium: $%.2f\n", monthlyPremium);
    
    return 0; 
}