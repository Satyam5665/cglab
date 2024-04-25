#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

void MidPointLineAlgo(int x1, int y1, int x2, int y2){

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    int s=max(dx,dy);

    int pk=2*dy-dx;
    int x=x1, y=y1;
    putpixel(round(x),round(y), WHITE);

    for(int k=0;k<s;k++){
        if(pk<0){
            x++;
            pk=pk+2*dy;
        }
        else{
            x++;
            y++;
            pk=pk+2*dy-2*dx;
        }
        putpixel(round(x),round(y), WHITE);
        delay(100);
             
    }
 }

int main() 
{ 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); 
    
    MidPointLineAlgo(90,120,60,80);
    delay(1000);
    closegraph();
    return 0; 
}