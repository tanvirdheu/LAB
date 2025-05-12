#include <graphics.h>
#include <iostream>
using namespace std;

void drawCirclePoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpointCircle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1 - r;

    drawCirclePoints(xc, yc, x, y);

    while (x < y) {
        x++;
        if (p < 0)
            p = p + 2 * x + 1;
        else {
            y--;
            p = p + 2 * (x - y) + 1;
        }
        drawCirclePoints(xc, yc, x, y);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc, yc, r;
    cout << "Enter center (xc, yc): ";
    cin >> xc >> yc;
    cout << "Enter radius: ";
    cin >> r;

    midpointCircle(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
