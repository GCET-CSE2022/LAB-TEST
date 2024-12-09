#include <stdio.h>
int main()
{
    int num1, num2;
    int arr[20], i = 0, carry = 0;
    printf("Enter the First Binary number to add: ");
    scanf("%d", &num1);
    printf("Enter the Second Binary Number to add: ");
    scanf("%d", &num2);

    while (num1 != 0 || num2 != 0)
    {
        int sum = (num1 % 10) + (num2 % 10) + carry;
        arr[i++] = sum % 2;
        carry = sum / 2;

        num1 /= 10;
        num2 /= 10;
    }

    if (carry != 0)
    {
        arr[i++] = carry;
    }
    printf("Sum: ");
    while (i > 0)
    {
        printf("%d", arr[--i]);
    }
    return 0;
}
