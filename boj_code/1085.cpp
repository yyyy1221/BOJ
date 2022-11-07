#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x, y, w, h;
    int y0, x0, wy, xh;
    int minimum = INFINITY;
    cin>>x>>y>>w>>h;
    y0 = x;
    x0 = y;
    wy = w - x;
    xh = h - y;
    minimum = min(y0, x0);
    minimum = min(minimum, wy);
    minimum = min(minimum, xh);

    cout<<minimum;

}