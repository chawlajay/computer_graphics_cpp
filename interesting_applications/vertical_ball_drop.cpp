#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void drop_ball(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    for(int i=0;i<=10;i++)
    {

        circle(320,240,120-10*i);

        delay(100);

        cleardevice();
    }

    for(int i=0;i<=23;i++)
    {

        circle(320,240,10+10*i);

        delay(100);

        cleardevice();
    }
    for(int i=0;i<=23;i++)
    {

        circle(320,240,240-10*i);

        delay(100);

        cleardevice();
    }

    getch();
    closegraph();

}

int main()
{
    drop_ball();
    return 0;
}
