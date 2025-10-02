// WAP to show difference between Structure and Union. 

// Structure (struct):
// Each member has its own memory.
// Size of structure = sum of sizes of all members (with padding).

// Union (union):
// All members share the same memory.
// Size of union = size of largest member.

// - So, in a struct, all members can hold values simultaneously.
// - In a union, only one member at a time holds a valid value.

#include <stdio.h>
#include <string.h>

struct EmployeeStruct {
    int empno;
    char name[20];
    float salary;
};

union EmployeeUnion {
    int empno;
    char name[20];
    float salary;
};

int main() {
    struct EmployeeStruct s;
    union EmployeeUnion u;

    printf("=== Size Comparison ===\n");
    printf("Size of Structure: %lu bytes\n", sizeof(s));
    printf("Size of Union    : %lu bytes\n", sizeof(u));

    printf("\n=== Behavior of Structure ===\n");
    s.empno = 101;
    strcpy(s.name, "Alice");//In C, you can’t directly assign a string to a character array.
    s.salary = 50000.50;

    printf("Emp No: %d\n", s.empno);
    printf("Name  : %s\n", s.name);
    printf("Salary: %.2f\n", s.salary);

    printf("\n=== Behavior of Union ===\n");
    u.empno = 101;
    printf("After empno = 101 → Emp No: %d\n", u.empno);

    strcpy(u.name, "Alice");
    printf("After name = Alice → Name: %s\n", u.name);
    printf("Emp No (corrupted): %d\n", u.empno);  // overwritten

    u.salary = 50000.50;
    printf("After salary = 50000.50 → Salary: %.2f\n", u.salary);
    printf("Name (corrupted): %s\n", u.name);      // overwritten

    return 0;
}
