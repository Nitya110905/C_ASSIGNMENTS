// Write a program of structure 
// employee that provides the following 
// a. information -print and display empno, 
// empname, address andage

#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee e;
    printf("Enter Employee Number: ");
    scanf("%d", &e.empno);
    getchar();  // to clear newline

    printf("Enter Employee Name: ");
    fgets(e.empname, sizeof(e.empname), stdin);

    printf("Enter Address: ");
    fgets(e.address, sizeof(e.address), stdin);

    printf("Enter Age: ");
    scanf("%d", &e.age);

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee No: %d\n", e.empno);
    printf("Employee Name: %s", e.empname);
    printf("Address: %s", e.address);
    printf("Age: %d\n", e.age);

    return 0;
}
