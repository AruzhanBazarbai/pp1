//Problem A. 78524 Area of circle
/*
Given radius of circle. Find area of this circle.
Input
Input contains single integer 1<=n<=1000
Output
Output contains single double(print only 2 numbers after floating point).
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    double r;
    cin >> r;
    double pi=3.1415976331360;
    double s=pi*r*r;
    printf("%.2f",s);

    return 0;
}