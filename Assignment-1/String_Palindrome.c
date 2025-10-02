// WAP to reverse a string and check that the string is 
// palindrome or not


#include <stdio.h>
#include <string.h>

int main() {
    char original_str[100];
    char reversed_str[100];
    
    printf("Enter a String: ");
    fgets(original_str, sizeof(original_str), stdin);

    // strcspn finds the first occurrence of any character in the second string.
    // We replace the '\n' with a null terminator '\0'.
    original_str[strcspn(original_str, "\n")] = '\0';

    strcpy(reversed_str, original_str);

    int start = 0;
    int end = strlen(reversed_str) - 1;
    char temp;

    while (start < end) {
        temp = reversed_str[start];
        reversed_str[start] = reversed_str[end];
        reversed_str[end] = temp;
        start++;
        end--;
    }

    printf("Original: %s\n", original_str);
    printf("Reversed: %s\n", reversed_str);

    if (strcmp(original_str, reversed_str) == 0) {
        printf("\nResult: It's a Palindrome!\n");
    } else {
        printf("\nResult: It's NOT a Palindrome.\n");
    }
    
    return 0;
}