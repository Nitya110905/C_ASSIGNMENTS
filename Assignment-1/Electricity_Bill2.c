// Write a C program to input electricity unit charges and 
// calculate total electricity bill according to the given condition: 
// For first 50 units Rs. 
// 0.50/unit For next 100 
// units Rs. 0.75/unit For next 
// 100 units Rs. 1.20/unit For 
// unit above 250 Rs. 
// 1.50/unit 
// An additional surcharge of 20% is added to the bill 


#include <stdio.h>

int main() {
    int units;
    float bill = 0, surcharge, total_bill;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    } else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }

    surcharge = bill * 0.20;

    total_bill = bill + surcharge;

    printf("Electricity Bill\n");
    printf("Base Bill:       Rs. %.2f\n", bill);
    printf("Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Total Bill:      Rs. %.2f\n", total_bill);

    return 0;
}