// 15. Write a C program to determine eligibility for admission to a 
// professional course based on the following criteria 
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 
// and Marks in Chem>=50 and Total in all three subject >=190 or 
// Total in Maths and Physics >=140 ---- Input the marks obtained 
// in 
// Physics :65 Input the marks obtained in Chemistry :51 Input the 
// marks obtained in Mathematics :72 Total marks of Maths, Physics 
// and Chemistry : 188 Total marks of Maths and Physics : 137 The 
// candidate is not eligible.


#include<stdio.h>


int main(){
    int math,phy,chem,total,pm_total;
    printf("Enter Your marks for Maths , Physics & Chemistry : ");

    scanf("%d %d %d",&math,&phy,&chem);

    total = math + phy + chem;
    pm_total = total - chem;

    if((math >=65 && phy >= 55 && chem >= 50 ) && (total >=190 || pm_total >= 140)){
        printf("Eligible!!!");
    }
    else{
        printf("Not Eligible!!");
    }
    
    return 0;
}