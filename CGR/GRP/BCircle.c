#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int x_center = 320, y_center = 240, radius = 100; // Circle parameters
    int x = 0, y = radius;
    int p = 3 - 2 * radius; // Decision parameter

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Bresenham's circle drawing loop
    while (x <= y) { // Loop continues while x is less than or equal to y
        // Plot the points in all octants of the circle
        putpixel(x_center + x, y_center - y, WHITE);
        putpixel(x_center - x, y_center - y, WHITE);
        putpixel(x_center + x, y_center + y, WHITE);
        putpixel(x_center - x, y_center + y, WHITE);
        putpixel(x_center + y, y_center - x, WHITE);
        putpixel(x_center - y, y_center - x, WHITE);
        putpixel(x_center + y, y_center + x, WHITE);
        putpixel(x_center - y, y_center + x, WHITE);

        x++; // Increment x-coordinate

        // Update the decision parameter
        if (p < 0) {
            p = p + 4 * x + 6; // Move to the next point horizontally
        } else {
            y--; // Move to the next point diagonally
            p = p + 4 * (x - y) + 10;
        }
    }

    // Wait for user input before closing
    getch();
    closegraph();
    return 0;
}
