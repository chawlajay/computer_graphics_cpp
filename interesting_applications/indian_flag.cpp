#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void indian_flag(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL,GREEN);
    rectangle(100,100,500,200);
    floodfill(300,150,WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    rectangle(100,200,500,300);
    floodfill(300,250,WHITE);

    setfillstyle(SOLID_FILL,BROWN);
    rectangle(100,300,500,400);
    floodfill(300,350,WHITE);



    getch();
    closegraph();

}

int main()
{
    indian_flag();
    return 0;
}
