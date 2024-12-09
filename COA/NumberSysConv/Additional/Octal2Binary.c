#include <stdio.h>

int main() {
    int octal, decimal = 0, binary = 0, remainder, placeValue = 1;

    // Input octal number
    printf("Enter an octal number: ");
    scanf("%d", &octal);

    // Convert octal to decimal
    int tempOctal = octal;
    int powerOfEight = 1;
    while (tempOctal != 0) {
        remainder = tempOctal % 10;
        decimal = decimal + remainder * powerOfEight;
        tempOctal = tempOctal / 10;
        powerOfEight = powerOfEight * 8;  // Move to the next power of 8
    }

    // Convert decimal to binary
    int i = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + remainder * i;
        decimal = decimal / 2;
        i = i * 10;  // Move to the next place value in binary
    }

    // Output the binary equivalent
    printf("Binary: %d\n", binary);

    return 0;
}
