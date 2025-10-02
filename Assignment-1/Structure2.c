// Write a program of structure for five 
// employee that provides the following 
// information -print and display empno, 
// empname, address andage 

#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee e[5];
    int i;

    // Input for 5 employees
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Enter Employee Number: ");
        scanf("%d", &e[i].empno);
        getchar();  // clear newline

        printf("Enter Employee Name: ");
        fgets(e[i].empname, sizeof(e[i].empname), stdin);

        printf("Enter Address: ");
        fgets(e[i].address, sizeof(e[i].address), stdin);

        printf("Enter Age: ");
        scanf("%d", &e[i].age);
        getchar();  // clear newline
    }

    // Display details
    printf("\n--- Employee Records ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee No: %d\n", e[i].empno);
        printf("Employee Name: %s", e[i].empname);
        printf("Address: %s", e[i].address);
        printf("Age: %d\n", e[i].age);
    }

    return 0;
}
