// Write a program in C to copy one string to another string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "This is the source string.";
    char str2[100]; 

    strcpy(str2, str1);

    printf("Original String (str1): %s\n", str1);
    printf("Copied String (str2):   %s\n", str2);

    return 0;
}