#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void house(){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    rectangle(100,200,400,400);     // front wall big rectangle
    rectangle(100,220,400,220);     // front wall small rectangle
    
    line(400,200,550,150);          //side wall upper line
    line(400,220,550,170);          //side wall middle line
    line(400,400,550,350);          //side wall lower line
    line(550,150,550,350);          //side wall vertical line
	
    getch();
    closegraph();

}

int main()
{
    house();
    return 0;
}
