// Accept 2 numbers and find out its sum check it size 

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum is: %d\n", sum);
    // %zu is the correct format specifier for the sizeof result.
    printf("The size of the sum variable in memory is: %zu bytes\n", sizeof(sum));

    return 0;
}