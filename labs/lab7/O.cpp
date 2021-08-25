#include <iostream>
#include <cmath>
using namespace std;

int f(int k, int a, int cnt){
    if(k < a) return cnt << char(k + 64);
    else cout << x << " ";
    return f(n, x + 1);
}

int main(){

    int n, m;
    cin >> n >> m;
    int k = n * m;
    int a = 26;
    cout << f(k,a,0);
    
    
    return 0;
}