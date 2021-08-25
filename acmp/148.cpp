//НОД
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int a,b;
    cin >> a >> b;
    while(b%=a) swap(a,b);
    cout << a;
    return 0;
}