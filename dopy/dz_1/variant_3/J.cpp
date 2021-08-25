//In this problem you should find can three sides form a triangle
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a) cout << "Yes";
    else cout << "No";
    return 0;
}