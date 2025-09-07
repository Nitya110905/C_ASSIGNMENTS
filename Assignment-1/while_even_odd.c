// Calculate 5 numbers from user and calculate number of 
// even and odd using of while loop 


#include<stdio.h>

int main(){

    int i = 0 , arr[5] , even_count = 0 , odd_count = 0;

    printf("Enter 5 numbers: \n");
    while(i < 5){
        scanf("%d",&arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
        i++;
    }
    

    printf("No. of even no.s : %d\n",even_count);
    printf("No. of odd no.s : %d\n",odd_count);

}