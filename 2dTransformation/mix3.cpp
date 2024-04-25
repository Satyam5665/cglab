#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1=3, y1=5, x2=4,y2=6, x3=9, y3=8;

    double x1d,x2d,x3d,y1d,y2d,y3d;
    
    double sx=5, sy=7;
    x1d=x1*sx;
    x2d=x2*sx;
    x3d=x3*sx;
    y1d=y1*sy;
    y2d=y2*sy;
    y3d=y3*sy;

//--------------------------------------
    long long tx=-10, ty=-7;
    x1d=x1d+tx;
    x2d=x2d+tx;
    x3d=x3d+tx;
    y1d=y1d+ty;
    y2d=y2d+ty;
    y3d=y3d+ty;

    double c=cos(60), s=sin(60);
    x1d=x1d*c-y1d*s;
    x2d=x2d*c-y2d*s;
    x3d=x3d*c-y3d*s;
    y1d=x1d*s+y1d*c;
    y2d=x2d*s+y2d*c;
    y3d=x3d*s+y3d*c;

    tx=10, ty=7;
    x1d=x1d+tx;
    x2d=x2d+tx;
    x3d=x3d+tx;
    y1d=y1d+ty;
    y2d=y2d+ty;
    y3d=y3d+ty;

//-------------------------------------------
    tx=5, ty=6;
    x1d=x1d+tx;
    x2d=x2d+tx;
    x3d=x3d+tx;
    y1d=y1d+ty;
    y2d=y2d+ty;
    y3d=y3d+ty;

    cout<<"\n\nThe resultant SQUARE is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d;

    return 0;
}