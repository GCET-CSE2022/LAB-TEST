#include <stdio.h>
#include <math.h>
int main()
{
    int num,deci,r;
    printf("enter any Binary number: ");
    scanf("%d",&num);
    int i=0;
    while(num>0)
    {
        r=num%10;
        deci=deci+r*pow(2,i++);
        num=num/10;
    }
    printf("the Decimal value of the number is: %d",deci);
}