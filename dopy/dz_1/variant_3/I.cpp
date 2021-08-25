//Given the some number. Determine whether the number is a three-digit number.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a>100 && a<1000) cout << "YES";
    else cout << "NO";
    return 0;
}