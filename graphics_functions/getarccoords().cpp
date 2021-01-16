//used to get coordinates of arc which is drawn most recently
//arccoordstype is a predefined structure which is defined as follows:
//	struct arccoordstype
//	{
//	   // center point of arc
//	   int x, y; 
//	   // start position                
//	   int xstart, ystart;
//	   // end position        
//	   int xend, yend;    
//	};

#include <bits/stdc++.h>
#include <stdio.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    struct arccoordstype p;
    char s[100];
    initgraph(&gd, &gm, "");

    arc(200, 150, 0, 90, 100);

    getarccoords(&p);

    sprintf(s, "(%d, %d)", p.xstart,p.ystart);
    outtextxy(310, 145,s);

    sprintf(s, "(%d, %d)", p.xend,p.yend);
    outtextxy(195, 35, s);

    getch();
    closegraph();
    return 0;
}
