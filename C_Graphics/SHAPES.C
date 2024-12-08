#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
printf("printing the different shapes using the predefined methods");
line(10,10,100,10);// printing the line using the 2 end points
rectangle(40,40,80,80);// drawing a rectangle using the 2 points
circle(200,200,80);// drawing the circle using the xc yc and the radius
setfillstyle(XHATCH_FILL,RED);
bar(300,
50,500,100);
sector(195, 160, 0, 90, 100, 100)
getch();

closegraph();
}