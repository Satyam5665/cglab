#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1=1, y1=1, x2=3,y2=1, x3=3,y3=3,x4=1,y4=3;

    double x1d,x2d,x3d,y1d,y2d,y3d,x4d,y4d;

    int tx=-2, ty=-2;
    
    x1d=x1+tx;
    x2d=x2+tx;
    x3d=x3+tx;
    x4d=x4+tx;
    y1d=y1+ty;
    y2d=y2+ty;
    y3d=y3+ty;
    y4d=y4+ty;
    
    double sx=0.5, sy=0.5;

    x1d=x1d*sx;
    x2d=x2d*sx;
    x3d=x3d*sx;
    y1d=y1d*sy;
    y2d=y2d*sy;
    y3d=y3d*sy;
    x4d=x4d*sx;
    y4d=y4d*sy;

    tx=2, ty=2;

    x1d=x1d+tx;
    x2d=x2d+tx;
    x3d=x3d+tx;
    x4d=x4d+tx;
    y1d=y1d+ty;
    y2d=y2d+ty;
    y3d=y3d+ty;
    y4d=y4d+ty;

    cout<<"\n\nThe resultant SQUARE is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d<<endl;
    cout<<x4d<<" "<<y4d;

    return 0;
}