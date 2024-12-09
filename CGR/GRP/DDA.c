#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h> // For abs()

int main() {
    int x1, y1, x2, y2;        // Coordinates
    int gd = DETECT, gm;       // Graphics driver and mode
    float length, dx, dy;      // Raster unit variables
    float X, Y;                // Current point
    int i;

    // Input coordinates
    printf("Enter First Coordinate (x1, y1): ");
    scanf("%d%d", &x1, &y1);
    printf("Enter Second Coordinate (x2, y2): ");
    scanf("%d%d", &x2, &y2);

    // Determine the maximum difference (length of the line)
    if (abs(x2 - x1) > abs(y2 - y1)) {
        length = abs(x2 - x1);
    } else {
        length = abs(y2 - y1);
    }

    // Calculate raster units (dx, dy)
    dx = (x2 - x1) / length;
    dy = (y2 - y1) / length;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");

    // Initialize starting point
    X = x1;
    Y = y1;

    // Draw line using DDA
    for (i = 0; i <= length; i++) {
        putpixel(X,Y, GREEN); // Plot the pixel
        X += dx; // Increment X
        Y += dy; // Increment Y
    }

    getch();       // Wait for user input
    closegraph();  // Close graphics mode
    return 0;
}
