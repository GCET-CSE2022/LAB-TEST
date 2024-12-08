#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,dx,dy,p=0;
    float m;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    clrscr();
    printf("Enter the coordinate of the point p1 and the point p2: ");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    m=dy/(float)dx;
    while(x1<=x2)
    {
        putpixel(x1,y1,WHITE);
        if(m<1)
        {
            if (p<0)
            {
                x1++;
                p+=2*dy;
            }
            else if(p>=0)
            {
                x1++;
                y1++;
                p+=2*dy-2*dx;

            }
        }

        else if(m>=1)
        {
            if(p<0)
            {
                 y1++;
                 p+=2*dx;   
            }
            else if(p>=0)
            {
                y1++;
                x1++;
		p+=2*dx-2*dy;

	    }
        }
    }
getch();
closegraph();
}