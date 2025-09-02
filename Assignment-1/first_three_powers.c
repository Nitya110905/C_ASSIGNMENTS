// C Program to Read Integer and Print First Three Powers (N^1, 
// N^2, N^3)

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer to find its first three powers: \n");
    scanf("%d", &n);
    
    printf("The first power (N^1) of %d is: %d\n", n, n);
    printf("The second power (N^2) of %d is: %d\n", n, n * n);
    printf("The third power (N^3) of %d is: %d\n", n, n * n * n);

    return 0;
}