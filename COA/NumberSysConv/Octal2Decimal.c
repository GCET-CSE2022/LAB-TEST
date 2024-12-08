#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter the octal number: ");
    int octal,rem,deci=0;
    int i=0;
    scanf("%d",&octal);
    while(octal>0)
    {
        rem=octal%10;
        deci=deci+rem*pow(8,i++);
        octal=octal/8;
    }
        printf("The Decimal Value is: %d",deci);
}