//Print all natural numbers until n with help of recursion (n is inclusive).
#include <iostream>
#include <cmath>
using namespace std;

int print(int n, int x){
    if(x==n) return n;
    else cout << x << " ";
    return print(n, x+1);
}

int main(){

    int n;
    cin >> n;
    int x=1;
    cout << print(n,x);
    
    
    return 0;
}