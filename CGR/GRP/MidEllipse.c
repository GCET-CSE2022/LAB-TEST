#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main() {
    int gd = DETECT, gm;
    float rx, ry, xc, yc;
    float x, y, p;
    float dx, dy;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter the center of the ellipse (xc, yc): ");
    scanf("%f%f", &xc, &yc);

    printf("Enter the lengths of the semi-major axis (rx) and semi-minor axis (ry): ");
    scanf("%f%f", &rx, &ry);

    x = 0;
    y = ry;

    // Region 1
    p = pow(ry, 2) - (pow(rx, 2) * ry) + (0.25 * pow(rx, 2));
    dx = 2 * pow(ry, 2) * x;
    dy = 2 * pow(rx, 2) * y;

    while (dx < dy) {
        // Plot the points in all four quadrants
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        if (p < 0) {
            x++;
            dx = dx + 2 * pow(ry, 2);
            p = p + dx + pow(ry, 2);
        } else {
            x++;
            y--;
            dx = dx + 2 * pow(ry, 2);
            dy = dy - 2 * pow(rx, 2);
            p = p + dx - dy + pow(ry, 2);
        }
    }

    // Region 2
    p = (pow(ry, 2) * pow((x + 0.5), 2)) + (pow(rx, 2) * pow((y - 1), 2)) - (pow(rx, 2) * pow(ry, 2));

    while (y >= 0) {
        // Plot the points in all four quadrants
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        if (p > 0) {
            y--;
            dy = dy - 2 * pow(rx, 2);
            p = p - dy + pow(rx, 2);
        } else {
            y--;
            x++;
            dx = dx + 2 * pow(ry, 2);
            dy = dy - 2 * pow(rx, 2);
            p = p + dx - dy + pow(rx, 2);
        }
    }

    getch();
    closegraph();
}
