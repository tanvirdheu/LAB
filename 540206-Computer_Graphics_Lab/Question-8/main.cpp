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

void bresenhamCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int d = 3 - 2 * r;

    drawCirclePoints(xc, yc, x, y);

    while (x <= y) {
        x++;
        if (d < 0)
            d = d + 4 * x + 6;
        else {
            y--;
            d = d + 4 * (x - y) + 10;
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
    cout << "Enter radius r: ";
    cin >> r;

    bresenhamCircle(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
