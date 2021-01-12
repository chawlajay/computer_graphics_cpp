// used to draw a polygon with white color inside it.
// syntax similar to drawpoly()

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);

   int arr[] = {100,200, 400,200, 350,400, 200,300, 330,340, 330,250, 100,200};   // 4 vertices polygon
   // (A,B,C,D,E,F,A) that's why 5 coordinates points are given in array.
   // {x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x1,y1}
    fillpoly(7, arr);
   getch();
   closegraph();
   return 0;
}
