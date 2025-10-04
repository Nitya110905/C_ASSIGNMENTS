// Write a program in C to count the total number of words in a 
// string.


#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Maximum string size

int main() {
    char str[MAX_SIZE];
    int i, word_count = 0;

    // A state flag to track if we are currently inside a word.
    // 0 = OUT (outside a word), 1 = IN (inside a word)
    int in_word = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // If the character is a space, tab, or newline, we are outside a word.
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            in_word = 0;
        }
        // If it's any other character and we were previously OUTSIDE a word...
        else if (in_word == 0) {
            in_word = 1;
            word_count++; 
        }
    }
    printf("Total number of words: %d\n", word_count);

    return 0;
}