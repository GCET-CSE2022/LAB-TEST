#include <stdio.h>

int main() {
    int num1, num2, borrow = 0;
    int i = 0, bit1, bit2, result[10];

    // Input binary numbers
    printf("Enter first binary number: ");
    scanf("%d", &num1);
    printf("Enter second binary number: ");
    scanf("%d", &num2);

    // Perform binary subtraction
    while (num1 != 0 || num2 != 0) {
        bit1 = num1 % 10;  // Get last bit of num1
        bit2 = num2 % 10;  // Get last bit of num2

        // Subtraction with borrow
        if (bit1 - bit2 - borrow == 1) {
            result[i] = 1;  // No borrow, result is 1
            borrow = 0;
        } else if (bit1 - bit2 - borrow == 0) {
            result[i] = 0;  // No borrow, result is 0
            borrow = 0;
        } else if (bit1 - bit2 - borrow == -1) {
            result[i] = 1;  // Borrow from the next bit
            borrow = 1;
        } else {
            result[i] = 0;  // Borrow from the next bit
            borrow = 1;
        }

        num1 = num1 / 10;  // Remove last bit of num1
        num2 = num2 / 10;  // Remove last bit of num2
        i++;
    }

    if (borrow != 0) {
        result[i] = borrow;  // If there’s any borrow left
        i++;
    }

    // Output the result
    printf("Difference: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", result[j]);
    }
    printf("\n");

    return 0;
}
