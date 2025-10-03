// WAP to accept 5 students name and store it in array  

#include <stdio.h>
#include <string.h> 

int main() {
    char names[5][100];

    printf("Enter 5 student names:\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        
        fgets(names[i], sizeof(names[i]), stdin);
        
    //  fgets stores the newline character ('\n'). This line removes it.
        names[i][strcspn(names[i], "\n")] = 0;
    }

    printf("\n--- Student List ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d is: %s\n", i + 1, names[i]);
    }

    return 0;
}