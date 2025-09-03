// WAP to make simple calculator (operation include 
// Addition, Subtraction, Multiplication, Division, modulo) 
// using conditional statement 

#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // We tell scanf to ignore any whitespace characters (like \n, space, or tab) before reading the char.

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (op == '+') {
        printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (op == '-') {
        printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (op == '*') {
        printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (op == '/') {
        if (num2 != 0)
            printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero is not allowed!\n");
    }
    else if (op == '%') {
        if (num2 != 0)
            printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
        else
            printf("Error: Modulo by zero is not allowed!\n");
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
