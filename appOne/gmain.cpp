#include"libOne.h"
void gmain() {
    window(1000, 1000);
    angleMode(DEGREES);
    float x, y, angle;
    while (notQuit) {
        clear(0, 50, 0);
        mathAxis(5.1f, 255);

        x = mathMouseX;
        y = mathMouseY;
        //ãtÉ^ÉìÉWÉFÉìÉgÇQä÷êîÇ≈äpìxÇãÅÇﬂÇÈ
        angle = atan2(y, x);

        strokeWeight(10);
        stroke(128);
        mathArrow(0, 0, x, y);
        //å Çï`âÊÇ∑ÇÈ
        stroke(255, 255, 200);
        mathArc(0, angle, 0.5f);

        textSize(50);
        fill(160);
        text((let)"x=" + x, 0, 50);
        text((let)"y=" + y, 0, 100);
        fill(255, 255, 200);
        text((let)"atan2(y,x)=" + angle, 0, 150);
        
        //ëºÇÃãtéOäpä÷êî
        float r = sqrt(x * x + y * y);
        fill(255, 200, 200);
        text((let)"asin(y/r)=" + asin(y / r), 0, 200);
        text((let)"acos(x/r)=" + acos(x / r), 0, 250);
        text((let)"atan(y/x)=" + atan(y / x), 0, 300);
    }
}