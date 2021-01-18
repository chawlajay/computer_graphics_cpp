#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void house(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    rectangle(100,200,400,400);     // front wall big rectangle
    rectangle(100,220,400,220);     // front wall small rectangle


    getch();
    closegraph();

}

int main()
{
    house();
    return 0;
}
