//  Accept 5 names from user at run time.


#include <stdio.h>
#include <string.h> // Required for string functions like strcspn()

int main() {
    char names[5][50];

    printf("Please enter 5 names:\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);

        // Read a full line of text (including spaces) from the user.
        // fgets is safer than scanf for strings.
        fgets(names[i], sizeof(names[i]), stdin);

        // fgets includes the newline character ('\n') at the end of the string.
        // This line removes it by finding its position and replacing it with a null terminator.
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\n--- The names you entered are: ---\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}