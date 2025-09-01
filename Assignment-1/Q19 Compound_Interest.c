// Calculate compound 
// interest 

#include<stdio.h>
#include<math.h>

int main(){
    float P , r = 0.06;
    int  n = 4 , t = 5;
    printf("Enter the principal amount : ");
    scanf("%f",&P);

    float A = P * pow(1 + r/n,n*t);
    float CI = A - P;

    printf("Your Compond Interest is : %.2f ",CI);

    return 0;

}