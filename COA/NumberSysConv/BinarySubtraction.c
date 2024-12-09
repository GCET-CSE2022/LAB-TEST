#include <stdio.h>

void binarySubtraction(int n1, int n2)
{
    int borrow = 0, result[20], i = 0;

    // Perform subtraction digit by digit
    while (n1 > 0 || n2 > 0)
    {
        int bit1 = n1 % 10;
        int bit2 = n2 % 10;

        // Subtract the bits and handle borrow
        int diff = bit1 - bit2 - borrow;

        if (diff < 0)
        {
            diff += 2;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        result[i++] = diff;
        n1 /= 10;
        n2 /= 10;
    }

    printf("Subtraction result: ");
    while (i > 0)
    {
        printf("%d", result[--i]);
    }
    printf("\n");
}

int main()
{
    int n1, n2;
    printf("Enter the first binary number: ");
    scanf("%d", &n1);
    printf("Enter the second binary number: ");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        printf("Error: Binary subtraction requires the first number to be greater than or equal to the second number.\n");
        return 1;
    }

    binarySubtraction(n1, n2);
    return 0;
}
