// Find character value 
// from ascii

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of the character
    printf("ASCII value of %c = %d\n", c, c);

    return 0;
}

