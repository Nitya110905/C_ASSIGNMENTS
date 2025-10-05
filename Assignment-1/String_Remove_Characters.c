// Write a program in C to remove characters from a string 
// except alphabets.


#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "He1llo! W0rld? This is C-Programming.";
    char alpha[100];

    int i = 0;
    int j = 0;

    while (s[i] != '\0') {
        if (isalpha(s[i])) {
            alpha[j] = s[i];
            j++; 
        }
        i++;
    }

    alpha[j] = '\0';

    printf("Original String: %s\n", s);
    printf("String with only alphabets: %s\n", alpha);

    return 0;
}