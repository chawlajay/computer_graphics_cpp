#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   line(100,200,350,150);         // line(x1,y1,x2,y2)
   getch();
   closegraph();
    return 0;
}
