// WAP Find out length of string without using inbuilt function 


#include <stdio.h>

int main() {
    char s[200];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') {
        len++;
    }

    printf("The length of the string is: %d\n", len);

    return 0;
}