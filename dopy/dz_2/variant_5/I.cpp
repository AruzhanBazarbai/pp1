/*
There is a right-angled triangle. Is it possible that the triangle’s sides are x, y, and z?
It is known, that for any right-angled triangle with legs a, b and hypotenuse c the following equation
holds:
a^2+b^2=c^2
*/
#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(z==sqrt(x*x+y*y)) cout << "Yes";
    else cout << "No";

    return 0;
}