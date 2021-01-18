#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void house(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    setfillstyle(2,CYAN);
    rectangle(100,200,400,400);     // front wall big rectangle
    floodfill(150,250,WHITE);

    setfillstyle(5,GREEN);
    rectangle(100,220,400,220);     // front wall small rectangle
    floodfill(150,210,WHITE);

    int side_wall_arr[]={400,200,550,150,550,170,400,220,400,200};
    drawpoly(5,side_wall_arr);
    floodfill(450,190,WHITE);

    setfillstyle(7,CYAN);
    int arr[]={400,220,550,170,550,350,400,400,400,220};
    drawpoly(5,arr);
    floodfill(450,350,WHITE);


    setfillstyle(1,YELLOW);
    int dome1[]={300,50,100,200,400,200,300,50};
    drawpoly(4,dome1);
    floodfill(250,150,WHITE);

    setfillstyle(1,RED);
    int dome2[]={300,50,400,200,550,150,300,50};
    drawpoly(4,dome2);
    floodfill(400,190,WHITE);

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
