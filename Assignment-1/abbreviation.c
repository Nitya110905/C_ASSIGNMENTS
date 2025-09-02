// Convert school’s name in 
// abbreviated form 

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    char str[100];
    int i = 0;

    printf("Enter your school name: ");
    fgets(str, sizeof(str), stdin);  // read full line with spaces

    printf("Abbreviation: ");

    // First character (if it's a letter)
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c", toupper(str[0]));
    }

    // Loop through the string
    for (i = 1; str[i] != '\0'; i++) {
        // if space before a letter, print that letter in uppercase
        if (str[i-1] == ' ' && str[i] != ' ' && str[i] != '\n') {
            printf("%c", toupper(str[i]));
        }
    }

    return 0;
}
