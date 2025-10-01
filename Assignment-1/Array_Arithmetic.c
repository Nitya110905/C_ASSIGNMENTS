// WAP to make addition, Subtraction and multiplication of 
// two matrix using 2-D Array

#include<stdio.h>

int main(){
    int arr1[2][2] , arr2[2][2] , n;

    printf("Enter 4 elements for 1st array : ");

    for(int i = 0 ; i < 2 ; i ++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter 4 elements for 2nd array : ");

    for(int i = 0 ; i < 2 ; i ++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Addition of two arrays is as follows : \n");
    for(int i = 0 ; i < 2 ; i ++){
        for(int j = 0 ; j < 2 ; j++){
            printf(" %d\t",arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction of two arrays is as follows : \n");
    for(int i = 0 ; i < 2 ; i ++){
        for(int j = 0 ; j < 2 ; j++){
            printf(" %d\t",arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of two arrays is as follows : \n");
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0; 
            for (int k = 0; k < 2; k++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            printf("%d\t", sum);
        }
        printf("\n");
    }

    return 0;
}