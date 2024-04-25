#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

void BHL(int x1, int x2, int y1, int y2){

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    int s=max(dx,dy);

    int pk=2*dy-dx;
    int x=x1, y=y1;
    putpixel(round(x),round(y), RED);
//    cout<<x<<" "<<y<<endl;
    for(int k=0;k<s;k++){
        if(pk<0){
            x++;
            putpixel(round(x),round(y), RED);
            delay(100);
            // cout<<x<<" "<<y<<endl;
            pk=pk+2*dy;
        }
        else{
            x++;
            y++;
            putpixel(round(x),round(y), RED);
            delay(100);
            // cout<<x<<" "<<y<<endl;
            pk=pk+2*dy-2*dx;
        }   
    }
 }

int main() 
{ 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); 
    
    // int x1,x2,y1,y2;
    // cout<<"Enter Point-1(x1,y1): ";
    // cin>>x1>>y1;
    // cout<<"Enter Point-2(x2,y2): ";
    // cin>>x2>>y2;
    // cout<<endl;
    // BHL(x1,y1,x2,y2); 
    BHL(10,20,30,50);
    delay(2000);
    closegraph();
    return 0; 
}