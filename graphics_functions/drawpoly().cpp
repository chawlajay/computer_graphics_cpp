// used to draw polygons i.e. triangle, rectangle, pentagon, hexagon etc.
// syntax -  void drawpoly( int number, int *polypoints );  where number indicates no. of vertices in a polygon

// for triangle , number of vertices are 3 but we write 3+1=4

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);

   int arr[] = {320, 150, 400, 250,
                 250, 350, 320, 150};

    // drawpoly function
    drawpoly(4, arr);

   getch();
   closegraph();
   return 0;
}
