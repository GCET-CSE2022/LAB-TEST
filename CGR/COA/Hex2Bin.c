#include <stdio.h>

int main() {
    char hex;
    int decimal = 0, binary[4], i, temp;

    // Input hexadecimal digit
    printf("Enter a hexadecimal digit: ");
    scanf("%c", &hex);

    // Convert hexadecimal to decimal
    if (hex >= '0' && hex <= '9') {
        decimal = hex - '0';  // Convert '0'-'9' to 0-9
    } else if (hex >= 'A' && hex <= 'F') {
        decimal = hex - 'A' + 10;  // Convert 'A'-'F' to 10-15
    }

    // Convert decimal to binary (4 bits)
    for (i = 3; i >= 0; i--) {
        binary[i] = decimal % 2;  // Get the binary digit
        decimal = decimal / 2;    // Reduce the decimal number
    }

    // Print the binary representation
    printf("Binary: ");
    for (i = 0; i < 4; i++) {
        printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}
