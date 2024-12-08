#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    int xc, yc, r, p, x, y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    clrscr();
    printf("Enter the value of the coordinates of the circle and the radius of the circle(x,y,r): ");
    scanf("%d %d %d", &xc, &yc, &r);
    p = 3 - 2 * r;
    x = 0;
    y = r;
    while (x <= y)
    {
	delay(50);
	putpixel(x + xc, y + yc, WHITE);
	putpixel(x + xc, -y + yc, WHITE);
	putpixel(-x + xc, y + yc, WHITE);
	putpixel(-x + xc, -y + yc, WHITE);
	putpixel(y + xc, x + yc, WHITE);
	putpixel(y + xc, -x + yc, WHITE);
	putpixel(-y + xc, x + yc, WHITE);
	    putpixel(-y + xc, -x + yc, WHITE);
	if (p < 0)
	{
	    p = p + (4 * x) + 6;
	}
	else
	{
	    y--;
	    p = p +(4 * (x - y))+ 10;
	}
	x++;
    }
    getch();
    closegraph();
}