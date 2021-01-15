// void settextstyle(int font, int direction,int font_size);
// font(0-10) argument specifies the font of text,Direction can be HORIZ_DIR (Left to right) or VERT_DIR (Bottom to top).
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,0);
   int font=4,direction=0,font_size=3;
   settextstyle(font,direction,font_size);
   outtext("good night");
   getch();
   closegraph();
   return 0;
}
