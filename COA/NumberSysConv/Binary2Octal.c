#include<stdio.h>

void main(){

    int bin =111;
    int r,dummy,octal=0,dec=0,s,Dpow=1,Opow=1;

// bin -> dec -> octal
dummy = bin;
    while(dummy>0){

        s = dummy%10;
        dec = dec+(s*Dpow);

        dummy = dummy/10;
        Dpow= Dpow*2;
    }
    printf("%d \n",dec);

    //dec-> octal

    dummy = dec;

    while(dummy>0){

        r = dummy%8;
        octal= octal+(r*Opow);
        Opow = Opow*10;
          dummy = dummy/8;

    }
    printf("%d \n",octal);
    }
