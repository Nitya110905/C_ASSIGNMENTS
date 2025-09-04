// Write a program in C to calculate and print the electricity bill of a 
// given customer. The customer ID, name, and unit consumed by 
// the user should be captured from the keyboard to display the 
// total amount to be paid to the customer. The charge are as follow 
// : 
// 20. Unit 21. Charge/unit 
// 22. upto 350 23. @1.20 
// 24. 350 and above but less than 
// 600 
// 25. @1.50 
// 26. 600 and above but less than 
// 800 
// 27. @1.80 
// 28. 800 and above 29. @2.00 
// 30. If bill exceeds Rs. 800 then a surcharge of 18% will be 
// charged and the minimum bill should be of Rs. 256/- 

#include<stdio.h>

int main(){
    int cus_id;
    char name[20];
    float units,bill,surcharge = 0.18;

    printf("\n*********Welcome to Electricity Bill Calculator***********\n");
    printf("Kindly Enter your Customer ID : ");
    scanf("%d",&cus_id);

    printf("\nKindly Enter Your Name : ");
    scanf("%19s",&name);

    printf("\n Kindly Enter Your Units of Generation : ");
    scanf("%f",&units);

    if (units < 0){
        printf("Invalid Units Entered!!!");
        return 1;
    }
    else if (units < 350){
        bill = units * 1.20;
        printf("\nMr./Ms. %s, with Id %d Your Total Bill is : %.2f /- only.",name,cus_id,bill);
    }
    else if (units < 600){
        bill = units * 1.50;
        printf("\nMr./Ms. %s, with Id %d Your Total Bill is : %.2f /- only.",name,cus_id,bill);
    }
    else if (units < 800){
        bill = units * 1.80;
        printf("\nMr./Ms. %s, with Id %d Your Bill is : %.2f /- only.",name,cus_id,bill);
    }
    else{
        bill = units * 2;
        printf("\nMr./Ms. %s, with Id %d Your Bill is : %.2f /- only.",name,cus_id,bill);
    }

    if (bill < 256){
        bill = 256;
        printf("\n As per Torrent Rule it must be a minimum of 256/-!!! So Your Total bill is : %.2f /- only. ",bill);
    }
    if (bill > 800){
        bill = bill + (surcharge * bill);
        printf("\n As the Bill exceeds the minimal amount of 800 rupees a SURCHARGE of 18%% will be applied on total bill!");
        printf("\nMr./Ms. %s, with Id %d Your Total Bill is : %.2f /- only.",name,cus_id,bill);

    }

    return 0;
}