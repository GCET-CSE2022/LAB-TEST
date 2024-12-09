#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:/Turboc3/BGI");

    // Set border color
    setcolor(5);
    arc(20,20,0,30,20);


    // Set fill pattern color
    setfillstyle(5, 5);
    sector(50, 50, 0,180,100,100);


    // Draw a bar (Boundary fill)
    boundaryfill(20, 80, 2);
    bar(70, 70, 170, 170);


    // Draw a 3D box
    floodfill(220, 220, 2);
    bar3d(200, 200, 300, 300, 100, 1);

    // Close graphics mode
    closegraph();

    return 0;
}
