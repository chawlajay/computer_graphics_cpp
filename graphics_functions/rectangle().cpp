// used to draw a rectangle

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   int left=100, top=100, right=200,bottom=200;
   // syntax - rectangle(int left, int top, int right, int bottom);  - indication the top-left coordinate of rectangle and right-bottom coordinate of it
   rectangle(left, top, right, bottom);
   getch();
   closegraph();
    return 0;
}
