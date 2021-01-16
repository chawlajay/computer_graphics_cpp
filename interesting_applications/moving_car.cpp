#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw_moving_car(){
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    for(int i=0;i<=420;i+=10)
    {
        setcolor(YELLOW); // color of car

        // lines for bonnet and body of car
        line(0 + i, 200, 210 + i, 200);         // lower horizontal line
        line(50 + i, 200, 75 + i, 170);         // left inclined line
        line(75 + i, 170, 150 + i, 170);        // upper horizontal line
        line(150 + i, 170, 165 + i, 200);       // right inclined line
        line(0 + i, 200, 0 + i, 230);           // left vertical line
        line(210 + i, 200, 210 + i, 230);       // right vertical line

        // For left wheel of car
        circle(65 + i, 230, 15);
        circle(65 + i, 230, 2);

        // For right wheel of car
        circle(145 + i, 230, 15);
        circle(145 + i, 230, 2);

        // Line left of left wheel
        line(0 + i, 230, 50 + i, 230);

        // Line middle of both wheel
        line(80 + i, 230, 130 + i, 230);

        // Line right of right wheel
        line(210 + i, 230, 160 + i, 230);

        delay(100);

        // To erase previous drawn car
        // use cleardevice() function
        cleardevice();
    }

    getch();
    closegraph();
}

int main()
{
    draw_moving_car();
    return 0;
}
