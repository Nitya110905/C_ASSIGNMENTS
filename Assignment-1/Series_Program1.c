// 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>

int main(){
    int n , sum = 0;
    printf("Enter the no. of terms : \n");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){
        sum = sum + i;
    }
    printf("%d",sum);


    return 0;
}