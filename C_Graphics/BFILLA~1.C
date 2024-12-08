#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void BoundaryFill(int x,int y,int Fclr,int Bclr)
{

    if(getpixel(x,y)!=Bclr &&getpixel(x,y)!=Fclr)
{   delay(5);
	putpixel(x,y,Fclr);
	BoundaryFill(x+1,y,Fclr,Bclr);
	BoundaryFill(x,y+1,Fclr,Bclr);
	BoundaryFill(x-1,y,Fclr,Bclr);
	BoundaryFill(x,y-1,Fclr,Bclr);

}
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    clrscr();
    printf("Creating a polygon");
    rectangle(100,100,150,120);
    BoundaryFill(110,110,GREEN,WHITE);
    getch();
    closegraph();
}