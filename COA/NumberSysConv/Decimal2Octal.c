#include <stdio.h>
int main()
{

    int decimal,rem,i=0;
    int arr[20];
    printf("Enter the decimal number to convert to the octal: ");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        rem=decimal%8;
        arr[i++]=rem;
        decimal=decimal/8;

    }
    printf("The octal value is: ");
    for(--i;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}