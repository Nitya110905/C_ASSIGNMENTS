// Write a program you have to make a 
// summation of first and last Digit. (E.g., 
// 1234 Ans: -5) 

// WAP to make a summation of first and last Digit.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Make the number positive if it's negative
    int positiveNum = abs(num);

    lastDigit = positiveNum % 10;

    firstDigit = positiveNum;

    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit of %d is: %d\n", num, sum);

    return 0;
}