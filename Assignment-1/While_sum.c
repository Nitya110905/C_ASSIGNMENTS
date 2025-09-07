// Calculate sum of 10 numbers 
// using of while loop 


#include<stdio.h>

int main(){
    int arr[10], sum = 0;

    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of 10 numbers : %d",sum);

}