#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void indian_flag(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");
// green stripe
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(100,100,500,200);
    floodfill(300,150,WHITE);

// white stripe
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(100,200,500,300);
    floodfill(300,250,WHITE);

// orange stripe - color not available in graphics so used brown
    setfillstyle(SOLID_FILL,BROWN);
    rectangle(100,300,500,400);
    floodfill(300,350,WHITE);

// outer circle of ASHOK CHAKRA
    setcolor(BLUE);
    circle(300,250,50);

// 24 lines inside circle completes the ASHOK CHAKRA
    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,0,15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,30,3*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,60,5*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,90,7*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,120,9*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,150,11*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,180,13*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,210,15*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,240,17*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,270,19*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,300,21*15,50);
    floodfill(300,250,BLUE);

    setfillstyle(SOLID_FILL,WHITE);
    pieslice(300,250,330,23*15,50);
    floodfill(300,250,BLUE);
// 24 lines complete here
    getch();
    closegraph();

}

int main()
{
    indian_flag();
    return 0;
}
