// sets the current fill pattern and fill color
// void setfillstyle(int pattern, int color)
// color[0-15] , pattern[0-12]
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    setfillstyle(HATCH_FILL,BLUE);
    circle(200,200,100);
    floodfill(200,200,WHITE);

    setfillstyle(CLOSE_DOT_FILL,YELLOW);
    circle(400,200,100);
    floodfill(400,200,WHITE);

    getch();
    closegraph();
    return 0;
}
