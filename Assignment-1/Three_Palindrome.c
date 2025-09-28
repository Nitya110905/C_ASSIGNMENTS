// Accept 3 numbers from user using while loop and 
// check each numbers palindrome


#include <stdio.h>

int main() {
    int count = 1;

    while (count <= 3) {
        int num, originalNum, reversedNum = 0, remainder;

        printf("Enter number %d: ", count);
        scanf("%d", &num);

        originalNum = num;

        while (num > 0) {
            remainder = num % 10; 
            
            reversedNum = reversedNum * 10 + remainder;
            
            num = num / 10;
        }

        if (originalNum == reversedNum) {
            printf("Result: %d is a palindrome.\n\n", originalNum);
        } else {
            printf("Result: %d is not a palindrome.\n\n", originalNum);
        }

        count++;
    }

    return 0;
}