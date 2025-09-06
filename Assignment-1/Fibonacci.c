// WAP to print Fibonacci series up to given numbers 

#include<stdio.h>

int main(){
    int n1 = 0 , n2 = 1 , n3 , terms;
    printf("Enter the no. of terms you want for fibonacci :");
    scanf("%d",&terms);
    printf("Fibonacci Series : %d , %d ",n1,n2);

    for (int i = 0; i < (terms-2);i++){
        n3 = n1 + n2;
        printf(", %d ",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}