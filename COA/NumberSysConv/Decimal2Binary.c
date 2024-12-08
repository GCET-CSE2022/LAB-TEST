#include <stdio.h>
int main()
{
    int arr[20];
    printf("enter the Decimal number: ");
    int num,r;
    scanf("%d",&num);
    int i=0;
    while(num>0)
    {
        r=num%2;
        arr[i]=r;
        i++;
        num=num/2;
        
    }
    printf("The Binary Equivalent is: ");
    for(--i;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
