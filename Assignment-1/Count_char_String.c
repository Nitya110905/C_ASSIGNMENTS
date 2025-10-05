// Write a program in C to count the total number of alphabets, 
// digits and special characters in a string.

#include <stdio.h>
#include <ctype.h> // Required for isalpha() and isdigit()

#define MAX_SIZE 100 

int main() {
    char str[MAX_SIZE];
    int alphabets = 0, digits = 0, specials = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            alphabets++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (str[i] != '\n' && str[i] != '\0') {
            specials++;
        }
        
        i++;
    }

    printf("\n--- Analysis Complete ---\n");
    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", specials);

    return 0;
}