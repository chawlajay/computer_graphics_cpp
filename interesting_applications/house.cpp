#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void house(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    setfillstyle(2,CYAN);
    rectangle(100,200,400,400);     // front wall big rectangle
    floodfill(150,250,WHITE);

    setfillstyle(3,GREEN);
    rectangle(100,220,400,220);     // front wall small rectangle
    floodfill(150,210,WHITE);

    line(400,200,550,150);          //side wall upper line
    line(400,220,550,170);          //side wall middle line
    line(400,400,550,350);          //side wall lower line
    line(550,150,550,350);          //side wall vertical line

    line(300,50,100,200);           //dome left slant line
    line(300,50,400,200);           //dome middle slant line
    line(300,50,550,150);           //dome right slant line

    rectangle(220,300,280,400);     // door rectangle
    arc(250,300,0,180,30);          // arc on door
    getch();
    closegraph();

}

int main()
{
    house();
    return 0;
}
