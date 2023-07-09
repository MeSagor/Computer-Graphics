#include <iostream>
#include <math.h>
#include <graphics.h>
using namespace std;

void koch(int levels, int x1, int y1, int x5, int y5) {
    int x2, y2, x3, y3, x4, y4;
    int dx, dy;
    if (levels == 0) {
        line(x1, y1, x5, y5);
    } else {
        delay(10);
        dx = (x5 - x1) / 3;
        dy = (y5 - y1) / 3;
        x2 = x1 + dx;
        y2 = y1 + dy;
        x3 = (int)(0.5 * (x1 + x5) + sqrt(3) * (y1 - y5) / 6);
        y3 = (int)(0.5 * (y1 + y5) + sqrt(3) * (x5 - x1) / 6);
        x4 = 2 * dx + x1;
        y4 = 2 * dy + y1;
        koch(levels - 1, x1, y1, x2, y2);
        koch(levels - 1, x2, y2, x3, y3);
        koch(levels - 1, x3, y3, x4, y4);
        koch(levels - 1, x4, y4, x5, y5);
    }
}
int main() {
    int gra_driver = DETECT, gra_mode;
    initgraph(&gra_driver, &gra_mode, NULL);

    int levels = 2;
    koch(levels, 250, 40, 120, 300);
    koch(levels, 380, 300, 250, 40);
    koch(levels, 120, 300, 380, 300);

    getch();
    closegraph();
    return 0;
}