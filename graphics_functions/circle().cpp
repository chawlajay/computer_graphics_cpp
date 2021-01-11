// circle() - used to make a circle by providing center and radius of circle

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   int x=300,y=200,radius=20;     // x and y for center of circle
   circle(x, y, radius);      // syntax - circle(x,y,radius)
   circle(x, y, radius+20);
   circle(x, y, radius+40);
   circle(x, y, radius+60);
   circle(x, y, radius+80);
   getch();
   closegraph();
   return 0;
}
