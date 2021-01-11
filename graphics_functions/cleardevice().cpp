// clears the window screen

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);

   setbkcolor(GREEN); // sets background color to green
   outtext("Press any key to clear the screen.");
   getch();

   cleardevice();
   outtext("Press any key to exit");
   getch();

   closegraph();
   return 0;
}
