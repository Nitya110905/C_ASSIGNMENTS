// Write a program in C to separate individual characters from a 
// string.

#include<stdio.h>
#include<string.h>

int main(){
    char word[100];
    printf("Enter String : \n");
    fgets(word , sizeof(word) , stdin);

    word[strcspn(word, "\n")] = '\0';

    for(int i = 0 ; i < strlen(word) ; i++){
        printf("%c\t" , word[i]);
    }



}