// setcolor() function sets the text color.
// color[0-15] , syntax - void setcolor(int color);

// color can have int values as well as available color names eg. WHITE , BLACK , YELLOW , etc

// getcolor() function which returns the current text color value in integer.
// color[0-15] , syntax - int getcolor();
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    char arr[100];
    setbkcolor(RED);   //BACKGROUND COLOR RED
    setcolor(YELLOW);  // TEXT COLOR YELLOW

    sprintf(arr, "Current text color = %d  (yellow have 14 value)", getcolor());
    outtextxy(10, 10, arr);
    getch();
    closegraph();
    return 0;
}
