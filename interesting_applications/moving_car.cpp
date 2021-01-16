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
        line(0 + i, 300, 210 + i, 300);         // lower horizontal line
        line(50 + i, 300, 75 + i, 270);         // left inclined line
        line(75 + i, 270, 150 + i, 270);        // upper horizontal line
        line(150 + i, 270, 165 + i, 300);       // right inclined line
        line(0 + i, 300, 0 + i, 330);           // left vertical line
        line(210 + i, 300, 210 + i, 330);       // right vertical line

        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);

        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);

        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);

        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);

        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);

        delay(100);

    }

    getch();
    closegraph();
}

int main()
{
    draw_moving_car();
    return 0;
}
