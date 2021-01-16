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

    }

    getch();
    closegraph();
}

int main()
{
    draw_moving_car();
    return 0;
}
