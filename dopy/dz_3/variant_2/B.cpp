/*
Today is Aksunkar’s birthday! Aksunkar has a box. She wants to put balls in a box. Help her write a
program that determines if a given point falls into this field (rectangle). The sides of the rectangle are
parallel to the coordinate axes.
Input
First, the coordinates of the upper left corner of the rectangle are entered from the keyboard, then the
lower right and, at the end, the coordinates of the point.
Output
All coordinates are integers modulo not exceeding 10000. The program should print the word yes if the
point is inside the rectangle (the boundaries are counted), and no otherwise.
*/
#include <iostream>
using namespace std;
void f(){
    int x1,y1,x2,y2,a,b;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;

    bool k=true;
    
    if(x1>y1){
        if(!(a<=x1 && a>=y1)){
            k=false;
        }
    }else{
        if(!(a>=x1 && a<=y1)){
            k=false;
        }
    }
    if(x2>y2){
        if(!(b<=x2 && b>=y2)){
            k=false;
        }
    }else{
        if(!(b>=x2 && b<=y2)){
            k=false;
        }
    }
    if(k) cout << "Yes";
    else cout << "No";
}
int main(){
    f();
    
    return 0;
}