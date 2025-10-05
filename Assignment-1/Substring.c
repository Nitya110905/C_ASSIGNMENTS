//  Write a program in C to extract a substring from a given string 

#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "This is a C program.";
    char destination[20]; 
    int start = 10; 
    int length = 9; 
    int i = 0;

    while (i < length && source[start + i] != '\0') {
        destination[i] = source[start + i];
        i++;
    }

    destination[i] = '\0';

    printf("Original String: \"%s\"\n", source);
    printf("Extracted Substring: \"%s\"\n", destination);

    return 0;
}