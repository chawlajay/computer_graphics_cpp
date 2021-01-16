#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void traffic_signal(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    rectangle(200,100,300,300);
    setfillstyle(SOLID_FILL,RED);
    circle(250,140,20);
    floodfill(250,140,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(250,200,20);
    floodfill(250,200,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    circle(250,260,20);
    floodfill(250,260,WHITE);

    rectangle(230,300,270,480);
    getch();
    closegraph();

}

int main()
{
    traffic_signal();
    return 0;
}
