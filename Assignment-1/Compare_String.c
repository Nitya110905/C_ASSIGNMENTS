// Write a program in C to compare two strings without 
// using string library functions. 

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100] , str2[100];

    printf("Enter string 1 : \n");
    fgets(str1 , sizeof(str1) , stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter string 2 : \n");
    fgets(str2 , sizeof(str2) , stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] == str2[i]) {
        printf("The strings are EQUAL.\n");
    } else {
        printf("The strings are UNEQUAL.\n");
    }

    return 0;
}


// In C, a string variable is actually a pointer to the memory address where the first character of the string is stored.

// When you use the == operator on two strings, you are not comparing their actual text content. Instead, you are comparing their memory addresses. Since two different strings will almost always be stored in different locations in memory, their addresses will be different, and the == comparison will return false, even if the strings contain the exact same characters.