#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char arr[30];
    int deci = 0, i = 0;
    int pos=0;
    printf("Enter the hexadecimal Number: ");

    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = len-1;i >=0 ; i--)
    {
         if (arr[i] <= '9')
        {
            deci = deci + (arr[i]-'0') * pow(16, pos++);
        }
        else
        {
            deci = deci + (arr[i] - 'A' + 10) * pow(16, pos++);
        }
    }
    printf("The Decimal value is: %d", deci);
}