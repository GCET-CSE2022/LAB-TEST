#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void FloodFill(int x,int y,int Fclr,int BkClr)
{
    if(getpixel(x,y)==BkClr)
    {   delay(20);
	putpixel(x,y,Fclr);
	FloodFill(x+1,y,Fclr,BkClr);
	FloodFill(x,y+1,Fclr,BkClr);
	FloodFill(x-1,y,Fclr,BkClr);
	FloodFill(x,y-1,Fclr,BkClr);
    }
}
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("This is the flood fill algo");
     setfillstyle(SOLID_FILL, RED); // Solid fill with red color

    // Draw and fill the rectangle
    bar(100, 100, 150, 150);
    FloodFill(110,110,GREEN,RED);
    getch();
    closegraph();
f





}