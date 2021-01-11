// used to draw an ellipse

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   
   // (x,y) coordinate is the center of ellipse
   int x = 100, y = 100, start_angle = 0, end_angle = 360, x_axis_radius = 60, y_axis_radius = 30;

   ellipse(x, y, start_angle,end_angle, x_axis_radius, y_axis_radius);
   getch();
   closegraph();
   return 0;
}
