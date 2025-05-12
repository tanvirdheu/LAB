#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void drawCirclePolynomial(int xc, int yc, int r) {
    for (int x = 0; x <= r; x++) {
        float y = sqrt(r * r - x * x);

        // Plotting symmetric points in all four quadrants
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
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

    drawCirclePolynomial(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
