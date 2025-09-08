// Pattern :
//  A
//  B C 
//  D E F 
//  G H I J 
//  K L M N O


#include<stdio.h>

int main (){
    char c = 'A';

    for (int i = 0; i < 5; i++){
        for (int j = 0; j <= i; j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }

    return 0;
}