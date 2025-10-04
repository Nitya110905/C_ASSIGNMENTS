// Write a program in C to print individual characters of a string in 
// reverse order

#include<stdio.h>
#include<string.h>

int main(){
    char word[100];
    printf("Enter String : \n");
    fgets(word , sizeof(word) , stdin);

    word[strcspn(word, "\n")] = '\0';

    for(int i = strlen(word)-1 ; i >= 0 ; i--){
        printf("%c\t" , word[i]);
    }



}