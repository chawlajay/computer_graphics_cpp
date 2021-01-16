// function which returns the current background color.
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    char arr[100];
    setbkcolor(LIGHTMAGENTA);

    sprintf(arr, "Current background color = %d", getbkcolor());
    outtextxy(10, 10, arr);
    getch();
    closegraph();
    return 0;
}
