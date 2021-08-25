/*
The Tribonacci sequence T[n] is defined as follows:
T[0] = 0, T[1] = 1, T[2] = 1, and T[n+3] = T[n] + T[n+1] + T[n+2] for n >= 0.
Given n, return the value of T[n].
*/
#include <iostream>
#include <queue>

int f(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    return f(n-3)+f(n-2)+f(n-1);
}
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << f(n);
   
    return 0;
}