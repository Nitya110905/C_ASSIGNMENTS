// Write a program in C to count the total number of vowels or 
// consonants in a string.

#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[150];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; ++i) {
        
        char ch = tolower(str[i]);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("\n--- Result ---\n");
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}