#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void midpointLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int x = x1;
    int y = y1;

    int dx1 = abs(dx);
    int dy1 = abs(dy);

    int sx = dx >= 0 ? 1 : -1;
    int sy = dy >= 0 ? 1 : -1;

    if (dy1 <= dx1) {
        int d = 2 * dy1 - dx1;
        int incrE = 2 * dy1;
        int incrNE = 2 * (dy1 - dx1);

        putpixel(x, y, WHITE);

        for (int i = 0; i < dx1; i++) {
            if (d <= 0) {
                d += incrE;
                x += sx;
            } else {
                d += incrNE;
                x += sx;
                y += sy;
            }
            putpixel(x, y, WHITE);
        }
    } else {
        int d = 2 * dx1 - dy1;
        int incrE = 2 * dx1;
        int incrNE = 2 * (dx1 - dy1);

        putpixel(x, y, WHITE);

        for (int i = 0; i < dy1; i++) {
            if (d <= 0) {
                d += incrE;
                y += sy;
            } else {
                d += incrNE;
                x += sx;
                y += sy;
            }
            putpixel(x, y, WHITE);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2;
    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    midpointLine(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
