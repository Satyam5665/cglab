#include <graphics.h> 
#include<bits/stdc++.h>
using namespace std;
 
void DDA(int x1, int y1, int x2, int y2){
    int dx=x2-x1;
    int dy=y2-y1;
    float m=dy/dx;
    int steps=max(abs(dx),abs(dy));
    
    float Xinc = dx/(float)steps; 
    float Yinc = dy/(float)steps; 
  
    float X = x1; 
    float Y = y1; 
    for (int i = 0; i <= steps; i++) {
        if(X-int(X)<0.5 && Y-int(Y)<0.5) 
        {
            putpixel(round(int(X)), round(int(Y)), RED);
            delay(100);
        }
        else if(X-int(X)<0.5 && Y-int(Y)>=0.5) {
            putpixel(round(int(X)), round(int(Y)+1), RED);
            delay(100);
            }
        else if(X-int(X)>=0.5 && Y-int(Y)<0.5) {
            putpixel(round(int(X)+1), round(int(Y)), RED);
            delay(100);
        }
        else{
            putpixel(round(int(X)+1), round(int(Y)+1), RED);
            delay(100);
        }
        
        X += Xinc;
        Y += Yinc;
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
    // DDA(x1,y1,x2,y2);
    DDA(40,60,70,100);
    delay(2000);
    closegraph();
    return 0; 
}