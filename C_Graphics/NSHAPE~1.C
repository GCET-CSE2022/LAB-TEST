#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void FloodFill(int x,int y,int Fclr,int BkClr)
{
    if(getpixel(x,y)==BkClr)
    {   delay(10);
	putpixel(x,y,Fclr);
	FloodFill(x+1,y,Fclr,BkClr);
	FloodFill(x,y+1,Fclr,BkClr);
	FloodFill(x-1,y,Fclr,BkClr);
	FloodFill(x,y-1,Fclr,BkClr);
    }
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(100,100,20,20);`
    fillellipse(200,100,20,20);
    fillellipse(400,100,20,20);
    fillellipse(500,100,20,20);
    fillellipse(600,100,20,20);
    line(100,100,600,100);
    FloodFill(100,100,RED,WHITE);
    FloodFill(100,100,GREEN,RED);
    getch();
    closegraph();
    }