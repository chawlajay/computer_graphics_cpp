// Arc() - used to draw an arc of a circle

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   int x = 200, y = 200, start_angle = 30, end_angle = 270, radius = 100;
   initgraph(&gd,&gm,0);
   arc(x, y, start_angle, end_angle, radius);
   getch();
   closegraph();
   return 0;
}
