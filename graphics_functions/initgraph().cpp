#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  // these 4 lines below are always required to draw anything.
   int gd=DETECT,gm;         
   initgraph(&gd,&gm,0);      // to initialize and to show the graphics window to user
   getch();                            
   closegraph();
    return 0;
}
