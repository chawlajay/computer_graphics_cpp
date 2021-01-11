// bar() - used to draw a bar - mostly found in graphs 

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   int left, top, right, bottom;   // coordinates of left-top corner and right-bottom corner
   bar(left = 150, top = 150,right = 190, bottom = 350);
   bar(220, 250,260, 350);
   getch();
   closegraph();
   return 0;
}
