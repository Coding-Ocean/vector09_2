#include"libOne.h"
void gmain() {
    window(1000, 1000);
    angleMode(DEGREES);
    colorMode(HSV);
    float satu = 64;
    float x, y, angle = 0;
    while (notQuit) {
        clear(120, 255, 50);
        mathAxis(5.1f, 255);

        x = mathMouseX;
        y = mathMouseY;
        angle = atan2(y, x);

        strokeWeight(10);
        stroke(0, 0, 128);
        mathArrow(0, 0, x, y);
        stroke(240, satu, 255);
        mathLine(0, 0, x, 0);
        stroke(0, satu, 255);
        mathLine(x, 0, x, y);

        stroke(60, satu, 255);
        mathArc(0, angle, 0.5f);

        textSize(50);
        fill(0);
        fill(240, satu, 255);
        text((let)"x=" + x, 0, 50);
        fill(0, satu, 255);
        text((let)"y=" + y, 0, 100);
        fill(60, satu, 255);
        text((let)"atan2(y,x)=" + angle, 0, 150);
    }
}