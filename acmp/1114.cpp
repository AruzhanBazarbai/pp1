//МКАД
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    int v,t;
    cin >> v >> t;
    long long s=v*t%109;
    cout << (s+109)%109+1;
    
    return 0;
}