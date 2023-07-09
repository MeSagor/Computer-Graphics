#include <iostream>
#include <math.h>
#include <graphics.h>

using namespace std;
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x0 = 20, y0 = 30, length = 453;
    int x1 = x0 + length, y1 = y0 + (length * 60) / 100;
    int cx = x0 + (length * 45) / 100, cy = y0 + ((y1 - y0) / 2);
    int r = length / 5;

    setfillstyle(1, GREEN);
    rectangle(x0, y0, x1, y1);
    floodfill(x0 + 1, y0 + 1, WHITE);

    setfillstyle(1, RED);
    circle(cx, cy, r);
    floodfill(cx, cy, WHITE);

    getch();
    closegraph();
    return 0;
}

