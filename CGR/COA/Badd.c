#include <stdio.h>

int main() {
    int num1, num2, sum, carry = 0;
    int i = 0, bit1, bit2, result[10];

    // Input binary numbers
    printf("Enter first binary number: ");
    scanf("%d", &num1);
    printf("Enter second binary number: ");
    scanf("%d", &num2);

    // Perform binary addition
    while (num1 != 0 || num2 != 0) {
        bit1 = num1 % 10;  // Get last bit of num1
        bit2 = num2 % 10;  // Get last bit of num2
        sum = bit1 + bit2 + carry;  // Add bits and carry
        
        if (sum == 0) {
            result[i] = 0;  // No carry, result is 0
            carry = 0;
        } else if (sum == 1) {
            result[i] = 1;  // No carry, result is 1
            carry = 0;
        } else if (sum == 2) {
            result[i] = 0;  // Carry over
            carry = 1;
        } else {
            result[i] = 1;  // Carry over
            carry = 1;
        }

        num1 = num1 / 10;  // Remove last bit of num1
        num2 = num2 / 10;  // Remove last bit of num2
        i++;
    }

    if (carry != 0) {
        result[i] = carry;  // If there’s any carry left
        i++;
    }

    // Output the result
    printf("Sum: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", result[j]);
    }
    printf("\n");

    return 0;
}
