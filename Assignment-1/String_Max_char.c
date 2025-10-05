// Write a program in C to find the maximum number of 
// characters in a string. 

#include <stdio.h>
#include <string.h> // Required for strlen() and strcspn()

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("The maximum number of characters is: %d\n", length);

    return 0;
}