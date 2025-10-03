// Accept 5 numbers from 
// user and perform sum of array 

#include <stdio.h>

int main() {
    int num[5] , sum = 0;

    for(int i = 0 ; i < 5 ; i++){
        printf("Enter integer %d to reverse: \n",i+1);
        scanf("%d", &num[i]);

        sum = sum + num[i];

    }
    printf("%d",sum);

    return 0;
}