#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()
{
    int gd=DETECT,gm;
    int xc,yc,r;
    int x,y,p;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the coordinates of the circle (x y radius): ");
    scanf("%d %d %d",&xc,&yc,&r);
    x=0;
    y=r;
    p=1-r;
    while (x<=y)
    {   delay(20);
	putpixel(x+xc,y+yc,WHITE);
	putpixel(-x+xc,-y+yc,WHITE);
	putpixel(-x+xc,-y+yc,WHITE);
	putpixel(-x+xc,y+yc,WHITE);
	putpixel(y+xc,x+yc,WHITE);
	putpixel(y+xc,-x+yc,WHITE);
	putpixel(-y+xc,-x+yc,WHITE);
	putpixel(-y+xc,x+yc,WHITE);
	x++;
	if(p<=0)
	{
	    p+=2*x+3;
	}
	if(p>0)
	{
            y--;
	    p+=2*(x-y)+5;

        }

    }
	     getch();
} 