// WAP to take two Array input from user and sort them 
// in ascending or descending order as per user’s choice 



#include <stdio.h>

void sortArray(int arr[], int n, int order) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (order == 1 && arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (order == 2 && arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n1, n2, i, choice;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nEnter your choice:\n1. Ascending\n2. Descending\nChoice: ");
    scanf("%d", &choice);

    sortArray(arr1, n1, choice);
    sortArray(arr2, n2, choice);

    printf("\nFirst array after sorting:\n");
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array after sorting:\n");
    for (i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
