#include <stdio.h>
int main()
{
    printf("enter the Decimal number: ");
    int num;
    scanf("%d",&num);
    char arr[20];
    int rem,i=0;
    while (num>0)
    {
        rem=num%16;
        if( rem<10)
        {
            arr[i++]=rem+'0';
        }
        else {
            arr[i++]=rem+'A' -10;
        }
        num=num/16;
    }
    printf("The Hexadecimal value is: ");
    for(--i;i>=0;i--)
    {
        printf("%c ",arr[i]);
    }
}