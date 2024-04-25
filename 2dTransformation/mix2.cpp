#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1=2, y1=3, x2=5,y2=5, x3=4,y3=3;

    double x1d,x2d,x3d,y1d,y2d,y3d;

    int tx=-1, ty=-1;
    
    x1d=x1+tx;
    x2d=x2+tx;
    x3d=x3+tx;
    y1d=y1+ty;
    y2d=y2+ty;
    y3d=y3+ty;
    
    double c=cos(45), s=sin(45);
    x1d=x1d*c-y1d*s;
    x2d=x2d*c-y2d*s;
    x3d=x3d*c-y3d*s;
    y1d=x1d*s+y1d*c;
    y2d=x2d*s+y2d*c;
    y3d=x3d*s+y3d*c;

    tx=1, ty=1;

    x1d=x1d+tx;
    x2d=x2d+tx;
    x3d=x3d+tx;
    y1d=y1d+ty;
    y2d=y2d+ty;
    y3d=y3d+ty;

    cout<<"\n\nThe resultant is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d;

    return 0;
}