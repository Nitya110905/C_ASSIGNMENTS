// Pattern :
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main() {
    int i, j, rows = 11;
    int mid = (rows + 1) / 2;  

    for (i = 1; i <= rows; i++) {
        int stars;
        if (i <= mid) {
            stars = i; 
        } else {
            stars = rows - i + 1; 
        }

        for (j = 1; j <= stars; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
