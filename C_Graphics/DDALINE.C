#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
void main()
{
int gm,gd=DETECT;
    int x1,y1,x2,y2,dx,dy,steps,running=0;
    float xinc,yinc,x,y;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    clrscr();
    printf("Enter the value for the coordinate of the p1 and the p2");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    steps=dx>dy?abs(dx):abs(dy);
    xinc=dx/(float)steps;
    yinc=dy/(float)steps;
    x=x1;
    y=y1;
    while(running<=steps)
    {
	putpixel(abs(x),abs(y),WHITE);
	x+=xinc;
	y+=yinc;
    running++;
    }
    getch();
    closegraph();
}
