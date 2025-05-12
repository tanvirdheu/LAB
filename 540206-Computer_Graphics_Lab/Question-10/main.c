#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

void drawTriangle(int x[3], int y[3], int color) {
    setcolor(color);
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x[3], y[3];

    cout << "Enter coordinates of triangle (x1 y1 x2 y2 x3 y3): ";
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];

    drawTriangle(x, y, WHITE); // original
    getch();

    // Translation
    int tx, ty;
    cout << "Enter translation factors (tx, ty): ";
    cin >> tx >> ty;

    int xt[3], yt[3];
    for (int i = 0; i < 3; i++) {
        xt[i] = x[i] + tx;
        yt[i] = y[i] + ty;
    }

    drawTriangle(xt, yt, GREEN); // translated
    getch();

    // Rotation (about origin)
    float angle;
    cout << "Enter rotation angle (in degrees): ";
    cin >> angle;
    float rad = angle * PI / 180;

    int xr[3], yr[3];
    for (int i = 0; i < 3; i++) {
        xr[i] = round(xt[i] * cos(rad) - yt[i] * sin(rad));
        yr[i] = round(xt[i] * sin(rad) + yt[i] * cos(rad));
    }

    drawTriangle(xr, yr, YELLOW); // translated + rotated
    getch();

    closegraph();
    return 0;
}
