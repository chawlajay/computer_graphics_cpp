// draw and fill ellipse with white color inside it.
// syntax =  fillellipse(x,y,x_radius,y_radius)
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   fillellipse(100,200,50,80);
   getch();
   closegraph();
   return 0;
}
