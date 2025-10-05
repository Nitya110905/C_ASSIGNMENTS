// 14.Write a program in C to combine two 
// strings manually


#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\n' && str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\n' && str2[j] != '\0') {
        j++;
    }
    str1[i] = '\0';
    str2[j] = '\0';
    
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("\nThe combined string is: %s\n", str1);

    return 0;
}