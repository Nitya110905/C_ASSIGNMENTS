// WAP to take 10 no. Input from user find out below values 
// a. How many Even numbers are there 
// b. How many odd numbers are there 
// c. Sum of even numbers 
// d. Sum of odd numbers

#include<stdio.h>

int main(){
    int arr[10] ,even_count = 0 , odd_count = 0 , even = 0 , odd = 0;
    for (int i = 0 ; i < 10 ; i++ ){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0 ; i < 10 ; i++ ){
        if(arr[i] % 2 == 0){
            even_count ++;
            even = even + arr[i];
        }
        else{
           odd_count ++;
           odd = odd + arr[i]; 
        }
    }

    printf("No. of even no.s : %d\n",even_count);
    printf("No. of odd no.s : %d\n",odd_count);
    printf("Sum of all even no.s is : %d\n",even);
    printf("Sum of all odd no.s is : %d",odd);

}