/*
Solve the following equation:
ax − b = cx + d
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x=(b+d)/(a-c);
    cout << x;
    return 0;
}