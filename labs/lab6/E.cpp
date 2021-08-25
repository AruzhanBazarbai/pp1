//Given two integers a and b – sides of triangle. You need to write a function that calculates the hypotenuse
//of the triangle.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
    
int main(){
    int a,b;
    cin >> a >> b;
    double c=sqrt(a*a+b*b);
    cout << setprecision(4) << c;
    return 0;
       
}