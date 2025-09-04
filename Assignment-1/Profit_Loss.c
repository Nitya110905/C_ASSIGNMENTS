// Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>

int main(){
    float total,net_amount,purchase;
    printf("Enter the net amount you recieved on your trade : ");
    scanf("%f",&net_amount);
    printf("Enter the net amount you paid for purchase : ");
    scanf("%f",&purchase);

    total = net_amount - purchase;

    if (total>0){
        printf("You earned a profit of rupees : %.2f",total);
    }
    else{
        printf("You made a loss of rupees : %.2f",total);
    }

    return 0;
}