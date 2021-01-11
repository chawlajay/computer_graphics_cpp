// used to print some text on window screen

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   outtext("World is Beautiful");        // syntax - void outtext(char *string);
   getch();
   closegraph();
    return 0;
}
