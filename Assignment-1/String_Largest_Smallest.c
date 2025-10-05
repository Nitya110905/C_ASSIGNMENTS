// Write a program in C to find the largest and smallest words in a 
// string. 


#include <stdio.h>
#include <string.h>

int main() {
    char str[150], copy[150];
    char smallest_word[30], largest_word[30];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Create a copy because strtok() modifies the string
    strcpy(copy, str);

    const char delimiters[] = " \n\t.,;?!";
    char *word = strtok(copy, delimiters);

    if (word != NULL) {
        strcpy(smallest_word, word);
        strcpy(largest_word, word);

        while ((word = strtok(NULL, delimiters)) != NULL) {
            if (strlen(word) > strlen(largest_word)) {
                strcpy(largest_word, word);
            }
            if (strlen(word) < strlen(smallest_word)) {
                strcpy(smallest_word, word);
            }
        }
    }

    printf("\nOriginal String: %s", str);
    printf("Largest word: %s\n", largest_word);
    printf("Smallest word: %s\n", smallest_word);

    return 0;
}