// prints the text or string at a specified point (x, y) on the screen.

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   outtextxy(100,200,"You are Awesome");     // syntax - void outtextxy(int x, int y, char *string);
   getch();
   closegraph();
    return 0;
}
