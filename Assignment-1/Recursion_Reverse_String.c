// WAP to find reverse of string using recursion 

#include<stdio.h>
#include<string.h>

void reverse_string(char s[] ,int  start , int end ){
    if (start >= end) {
        return;
    }

    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    reverse_string(s, start + 1, end - 1);
}

int main(){
    char s[100];
    printf("Enter a string : ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    reverse_string(s , 0 , strlen(s)-1);

    printf("Reversal is : %s",s);

    return 0;
}