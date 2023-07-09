#include<graphics.h>
using namespace std;

void rectangle() {
    setcolor(GREEN);
    rectangle(50, 50, 200, 200);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(51, 51, GREEN);
}

void triangle() {
    // int x1 = 170, y1 = 100;
    // int x2 = 90, y2 = 250;
    // int x3 = 250, y3 = 250;
    int points[] = { 170,100,90,250,250,250,170,100 };
    setcolor(RED);
    drawpoly(4, points);
    // line(x1, y1, x2, y2);
    // line(x1, y1, x3, y3);
    // line(x2, y2, x3, y3);
    setfillstyle(SOLID_FILL, RED);
    floodfill(201, 201, RED);
}

void circle() {
    setcolor(BLUE);
    circle(200, 150, 70);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(201, 151, BLUE);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    string ch = "CTR";

    for (int i = 0; i < 3; i++) {
        if (ch[i] == 'R')
            rectangle();
        else if (ch[i] == 'T')
            triangle();
        else
            circle();
    }

    getchar();
    closegraph();
    return 0;
}