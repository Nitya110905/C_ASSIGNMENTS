// WAP to perform Palindrome number using for loop and function

#include<stdio.h>

int palindrome(int n){
    int sum = 0, rem;

    while(n>0){
        rem = n % 10;
        sum = sum*10 + rem;
        n = n/10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int ori = num;

    int res = palindrome(num);
    
    if(ori == res){
        printf("Palindrome!!!");
    }
    else{
        printf("Not Palindrome!!!");
    }
}