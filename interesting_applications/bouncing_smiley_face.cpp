#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void smiley_face(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    for(int i=0;i<=10;i++)
    {

        arc(100+22*i,240+i*14,210,330,50);
        setfillstyle(SOLID_FILL,BLUE); // color of smiley face
        circle(100+i*22,240+i*14,100);
        floodfill(100+i*22,240+i*14,WHITE);

        setfillstyle(SOLID_FILL,BLACK);
        circle(60+i*22,200+i*14,10);
        circle(140+i*22,200+i*14,10);
        floodfill(60+i*22,200+i*14,WHITE);
        floodfill(140+i*22,200+i*14,WHITE);


        delay(50);
        // To erase previous drawn face use cleardevice() function
        cleardevice();
    }

    for(int i=0;i<=10;i++)
    {
        arc(320+22*i,380-i*14,210,330,50);
        setfillstyle(SOLID_FILL,RED); // color of smiley face
        circle(320+i*22,380-i*14,100);
        floodfill(320+i*22,380-i*14,WHITE);

        setfillstyle(SOLID_FILL,BLACK);
        circle(280+i*22,340-i*14,10);
        circle(360+i*22,340-i*14,10);
        floodfill(280+i*22,340-i*14,WHITE);
        floodfill(360+i*22,340-i*14,WHITE);

        delay(50);
        // To erase previous drawn face use cleardevice() function
        cleardevice();
    }

    for(int i=0;i<=10;i++)
    {
        arc(540-22*i,240-i*14,210,330,50);
        setfillstyle(SOLID_FILL,BROWN); // color of smiley face
        circle(540-i*22,240-i*14,100);
        floodfill(540-i*22,240-i*14,WHITE);

        setfillstyle(SOLID_FILL,BLACK);
        circle(500-i*22,200-i*14,10);
        circle(580-i*22,200-i*14,10);
        floodfill(500-i*22,200-i*14,WHITE);
        floodfill(580-i*22,200-i*14,WHITE);

        delay(50);
        // To erase previous drawn face use cleardevice() function
        cleardevice();
    }

    for(int i=0;i<=10;i++)
    {
        arc(320-22*i,100+i*14,210,330,50);
        setfillstyle(SOLID_FILL,MAGENTA); // color of smiley face
        circle(320-i*22,100+i*14,100);
        floodfill(320-i*22,100+i*14,WHITE);

        setfillstyle(SOLID_FILL,BLACK);
        circle(280-i*22,60+i*14,10);
        circle(360-i*22,60+i*14,10);
        floodfill(280-i*22,60+i*14,WHITE);
        floodfill(360-i*22,60+i*14,WHITE);

        delay(50);
        // To erase previous drawn face use cleardevice() function
        cleardevice();
    }

    getch();
    closegraph();

}

int main()
{
    smiley_face();
    return 0;
}
