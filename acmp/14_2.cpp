//НОК
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int a,b;
    cin >> a >> b;
    int a1=a,b1=b;
    while(b%=a) swap(a,b);
    int gcd=a;
    cout << a1*b1/gcd;
    return 0;
}