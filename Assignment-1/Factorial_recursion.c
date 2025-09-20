// WAP to find factorial using recursion

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // base case
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative number does not exist.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    return 0;
}
