#include <stdio.h>
#include <math.h>

int main() {
    // Dec to binary
  int n = 10;
  int bin=0,r,dummy,e=1;
  dummy =n;
  while(dummy>0){
      r = dummy %2;
      bin = bin +(r*e);
      dummy= dummy/2;
      e= e*10;
      
  }
  printf("%d",bin);
    
}