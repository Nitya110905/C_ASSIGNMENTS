// Accept 5 numbers from user and find 
// those numbers factorials

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int arr[5];

    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nFactorials:\n");
    for (int i = 0; i < 5; i++) {
        printf("Factorial of %d = %lld\n", arr[i], factorial(arr[i]));
    }

    return 0;
}
