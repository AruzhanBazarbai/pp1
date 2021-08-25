#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int fib(int n){
   if(n==0) return 0;
   if(n==1) return 1;
   return fib(n-1)+fib(n-2);
}

int main (){
    int i,j;
    cin >> i >> j;
    int x=fib(i);
    int y=fib(j);
    while(y%=x) swap(x,y);
    cout << x;
    return 0;
}