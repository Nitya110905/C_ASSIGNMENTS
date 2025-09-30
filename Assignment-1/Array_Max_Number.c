// Write a program to find out the max number from given array 
// using function

#include<stdio.h>

 int findmax(int arr[] ,int n){
        int max = arr[0];
            for (int j = 1 ; j < n ; j++){
                if(max < arr[j]){
                    max = arr[j];
                }
            }
        return max;
    }

int main(){
    int n;
    printf("Enter the size of array!!!");
    scanf("%d",&n);
    int arr[n];

    for(int i = 1 ; i <= n ; i++){
        printf("Enter the number for %d position",i);
        scanf("%d",&arr[i]);
    }

    int result = findmax(arr, n);

    printf("Max number is %d",result);
}