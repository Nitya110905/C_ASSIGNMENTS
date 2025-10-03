//  WAP to accept 5 numbers from user and display in reverse 
// order using for loop and array 


#include <stdio.h>

int main() {
    int num[5], remainder;

    for(int i = 0 ; i < 5 ; i++){
        printf("Enter integer %d to reverse: ",i+1);
        scanf("%d", &num[i]);

        int reversed_num = 0;
        for (; num[i] != 0; num[i] /= 10) {
            remainder = num[i] % 10;
        
            reversed_num = reversed_num * 10 + remainder;
        }

        printf("Reversed number = %d\n", reversed_num);
    }

    return 0;
}