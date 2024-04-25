#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

void MidPointEllipseAlgo(int x0, int y0, int rx, int ry) {
    int x=0, y=ry;
    putpixel(round(x),round(y), WHITE);
    delay(100);

    int pk1=ry*ry + rx*rx/4 - rx*rx*ry;
    int dx=2*ry*ry*x;
    int dy=2*rx*rx*y;

    while(dx<dy){
        if(pk1<0){
            x++;
            dx=2*ry*ry*x;
            pk1=pk1+dx+ry*ry;
        }
        else{
            x++;
            y--;
            dx=2*ry*ry*x;
            dy=2*rx*rx*y;
            pk1=pk1+dx-dy+ry*ry;
        }
        putpixel(round(x0+x),round(y0+y), WHITE);
        putpixel(round(x0+x),round(y0-y), WHITE);
        putpixel(round(x0-x),round(y0+y), WHITE);
        putpixel(round(x0-x),round(y0-y), WHITE);
        delay(100);
    }

    int pk2=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
    while(y>=0){
        if(pk2>=0){
            y--;
            dy=2*rx*rx*y;
            pk2=pk2-dy+rx*rx;
        }
        else{
            x++;
            y--;
            dx=2*ry*ry*x;
            dy=2*rx*rx*y;
            pk2=pk2+dx-dy+rx*rx;
        }
        putpixel(round(x0+x),round(y0+y), WHITE);
        putpixel(round(x0+x),round(y0-y), WHITE);
        putpixel(round(x0-x),round(y0+y), WHITE);
        putpixel(round(x0-x),round(y0-y), WHITE);
        delay(100);
    }

}

int main()
{ 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); 
    
    MidPointEllipseAlgo(140,140,80,60);
    delay(500);
    closegraph();
    return 0; 
}