// Store 5 numbers in array and sort it in 
// ascending order

#include <stdio.h>

// insertion sort used
int main() {
    int i, arr[5], x, j;
    
    printf("You need to enter 5 elements\n");
    for (i = 0; i < 5; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < 5; i++) { 
        x = arr[i]; 
        j = i - 1;

        while (j >= 0 && x < arr[j]) { 
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = x; 
    }

    printf("\nSorted Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}