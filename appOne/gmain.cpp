#include"libOne.h"
void gmain(){
    window(1000, 1000);
    angleMode(DEGREES);
    float x, y, angle=0;
    float tx, ty;
    float tanAngle;
    while (notQuit) {
        x = cos(angle);
        y = sin(angle);
        tanAngle = tan(angle);
        tx = y * tanAngle;
        ty = -x * tanAngle;
        angle += 0.2f;
        clear(128);
        mathAxis(5.1f);
        strokeWeight(4);
        fill(0, 0, 0, 0);
        mathCircle(0, 0, 2);
        stroke(0);
        mathArrow(0, 0, x, y);
        stroke(160, 200, 255);
        mathLine(x, y, x + tx, y + ty);

        textSize(50);
        fill(0);
        text((let)"tanAngle="+tanAngle,0,50);
    }
}
