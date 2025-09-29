// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 


#include<stdio.h>

int main(){
    int n , sum = 0;
    printf("Enter the no. of terms : \n");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            sum = sum + j;
        }
    }
    printf("%d",sum);


    return 0;
}


// #include<stdio.h>

// int main() {
//     int n, sum;
//     printf("Enter the no. of terms: ");
//     scanf("%d", &n);

//     // Calculate the sum using the direct formula
//     sum = n * (n + 1) * (n + 2) / 6;

//     printf("%d", sum);

//     return 0;
// }