#include <stdio.h>

int main() {
    int binary, decimal = 0, remainder, placeValue = 1, hex = 0, i = 1;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    int tempBinary = binary;
    while (tempBinary != 0) {
        remainder = tempBinary % 10;
        decimal = decimal + remainder * placeValue;
        tempBinary = tempBinary / 10;
        placeValue = placeValue * 2;  // Move to the next power of 2
    }

    // Convert decimal to hexadecimal
    int hexPlaceValue = 1;
    while (decimal != 0) {
        remainder = decimal % 16;
        hex = hex + remainder * hexPlaceValue;
        decimal = decimal / 16;
        hexPlaceValue = hexPlaceValue * 10;  // Move to the next place value in hexadecimal
    }

    // Output the hexadecimal equivalent
    printf("Hexadecimal: %X\n", hex);

    return 0;
}
