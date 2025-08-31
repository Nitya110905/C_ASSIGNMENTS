#include <stdio.h>

int main() {
    int n;
    printf("Enter a number in the range 0 to 127: ");
    scanf("%d", &n);

    char c = n; // Integer is automatically casted to a character
    printf("Character corresponding to ASCII value %d = %c\n", n, c);

    return 0;
}

