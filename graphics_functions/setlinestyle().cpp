// function which sets the style for all lines drawn by line, lineto, rectangle, drawpoly, and so on.
// syntax - void setlinestyle(int linestyle, unsigned upattern,int thickness);
// linestyle[0-4] , upattern(usually 0) , thickness(1,3)
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    for(int i=0;i<5;i++)
    {
    setlinestyle(i,0,1);

    arc(100 + 100*i, 200, 0, 90, 100);
    }
    getch();
    closegraph();
    return 0;
}
