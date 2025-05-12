#include <graphics.h>
#include <iostream>
using namespace std;

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

    drawTriangle(x, y, WHITE);
    getch();

    // Scaling
    float sx, sy;
    cout << "Enter scaling factors sx and sy: ";
    cin >> sx >> sy;

    int x_scaled[3], y_scaled[3];
    for (int i = 0; i < 3; i++) {
        x_scaled[i] = x[i] * sx;
        y_scaled[i] = y[i] * sy;
    }

    drawTriangle(x_scaled, y_scaled, GREEN); // scaled triangle
    getch();

    // Reflection (about X-axis)
    int x_reflected[3], y_reflected[3];
    for (int i = 0; i < 3; i++) {
        x_reflected[i] = x[i];
        y_reflected[i] = -y[i] + getmaxy(); // reflected across X-axis
    }

    drawTriangle(x_reflected, y_reflected, RED); // reflected triangle
    getch();

    closegraph();
    return 0;
}
