// Write a C program to check whether a triangle can be formed 
// with the given values for the angles. 


#include<stdio.h>

int main(){
    int ang1, ang2, ang3, sum;

    printf("Enter three angles :");

    scanf("%d %d %d",&ang1,&ang2,&ang3);

    if (ang1 <= 0 || ang2 <= 0 || ang3 <= 0){
        printf("Invalid!!!\n");
    }

    sum = ang1 + ang2 + ang3;

    if (sum == 180){
        printf("Triangle can be formed!!!");
    }
    else{
        printf("Triangle cannot be formed");
    }

    return 0;

}