//Two points on the plane are given. It is required to calculate the length of the segment between the points.
//Calculate answer exactly 10 digits after the decimal point.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.10f",a);
    return 0;
}