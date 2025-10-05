// Write a program in C to find the number of times a given 
// word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "This is his house. Is this his car? Yes, it is.";
    char word[20];
    int count = 0;

    const char delimiters[] = " ,.?!";

    printf("Original String: \"%s\"\n", s);
    printf("Enter the word to find: ");
    scanf("%s", word);
// The strtok() function in C is used to break a string into a series of smaller strings, or tokens, based on a set of delimiter characters.
    char *token = strtok(s, delimiters);

    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        // Get the next word
        token = strtok(NULL, delimiters);
    }

    printf("The word '%s' appears %d time(s).\n", word, count);

    return 0;
}