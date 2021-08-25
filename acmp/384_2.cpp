//Числа Фибоначчи - 3
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int fib(int n){
    int a=0,b=1,x;
    for(int i=2;i<=n;i++){
        x=(a+b)%1000000000;
        a=b;
        b=x;
    }
    return b;
}

int main (){
    int i,j;
    cin >> i >> j;
    while(j%=i) swap(i,j);
    int x=fib(i);
    cout << x;
    return 0;
}