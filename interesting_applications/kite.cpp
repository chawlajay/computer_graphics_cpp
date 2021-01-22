#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void kite(int x1,int y1,int x2,int y2){

    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    int arr1[]={x1,y1,x1,y1+y2/4,x1/4,y1+y2/4,x1,y1};
    setfillstyle(SOLID_FILL,YELLOW);
    drawpoly(4,arr1);
    floodfill(x1-10,y1+y2/4-10,WHITE);

    int arr2[]={x1,y1,x1,y1+y2/4,x1+3*x1/4,y1+y2/4,x1,y1};
    setfillstyle(SOLID_FILL,BLUE);
    drawpoly(4,arr2);
    floodfill(x1+10,y1+y2/4-10,WHITE);

    int arr3[]={x1/4,y1+y2/4,x1,y1+y2/4,x1,y2,x1/4,y1+y2/4};
    setfillstyle(SOLID_FILL,BLUE);
    drawpoly(4,arr3);
    floodfill(x1-10,y1+y2/4+10,WHITE);

    int arr4[]={x1+3*x1/4,y1+y2/4,x1,y1+y2/4,x1,y2,x1+3*x1/4,y1+y2/4};
    setfillstyle(SOLID_FILL,YELLOW);
    drawpoly(4,arr4);
    floodfill(x1+10,y1+y2/4+10,WHITE);

    int arr5[]={x2,y2,3*x2/4,y2+y2/6,5*x2/4,y2+y2/6,x2,y2};
    setfillstyle(SOLID_FILL,GREEN);
    drawpoly(4,arr5);
    floodfill(x2,y2+y2/10,WHITE);
    getch();
    closegraph();

}

int main()
{
    kite(100,100,100,300);
    return 0;
}
