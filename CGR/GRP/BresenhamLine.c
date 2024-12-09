#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int x1, y1, x2, y2, dx, dy, p, x, y, i = 0;
    int gm, gd = DETECT;

    // Input coordinates
    printf("Enter x1 and y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%d%d", &x2, &y2);

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");

    // Calculate differences
    dx = x2 - x1;
    dy = y2 - y1;

    // Set initial points
    x = x1;
    y = y1;

    // Decision parameter (initial value)
    p = 2 * dy - dx;

    // Draw the first pixel
    putpixel(x, y, GREEN);

    // Bresenham's Line Algorithm
    while (x < x2) {
        x++;  // Move to the next x coordinate

        // Decision parameter check
        if (p < 0) {
            p = p + 2 * dy;  // No change in y
        } else {
            y++;  // Move to the next y coordinate
            p = p + 2 * dy - 2 * dx;  // Update the decision parameter
        }

        // Draw the pixel at the current (x, y)
        putpixel(x, y, GREEN);
    }

    // Wait for a key press to exit
    getch();
    closegraph();
}
