// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Binary to dec
  int n = 1000;
  int dec=0,r,dummy,e=1;
  
  for(dummy = n;dummy>0;)
    {
        r= dummy%10;
        dec += (r*e);
        dummy = dummy/10;
        e= 2*e;
    }
    printf("%d",dec);
    
}