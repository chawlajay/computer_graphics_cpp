// creates a delay in the execution of code when encountered/called
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    circle(100,100,50);
    delay(2000);			// value in milliseconds
    circle(200,200,50);

    getch();
    closegraph();
    return 0;
}
