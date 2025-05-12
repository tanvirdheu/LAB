#include <graphics.h>
#include <iostream>
using namespace std;

// 4-connected boundary fill
void boundaryFill(int x, int y, int fillColor, int boundaryColor) {
    int current = getpixel(x, y);
    if (current != boundaryColor && current != fillColor) {
        putpixel(x, y, fillColor);
        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define rectangle coordinates
    int left = 100, top = 100, right = 300, bottom = 200;

    // Draw the rectangle
    rectangle(left, top, right, bottom);

    // Start fill inside the rectangle
    boundaryFill(150, 150, RED, WHITE); // start from a point inside

    getch();
    closegraph();
    return 0;
}
