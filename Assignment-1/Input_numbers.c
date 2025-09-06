// WAP to accept 5 numbers from user and display all numbers 


#include<stdio.h>

int main(){
    int arr[5];
    for (int i = 0 ; i < 5 ; i++ ){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
        printf("Entered number is : %d\n",arr[i]);
    }
    return 0;
}