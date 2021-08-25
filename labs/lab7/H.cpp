/*
Find n-th fibonacci number. The Fibonacci sequence is a series of numbers where a number is found by
adding up the two numbers before it. Starting with 0 and 1, the sequence goes 0, 1, 1, 2, 3, 5, 8, 13, 21,
34, and so forth.
*/
#include <iostream>
#include <cmath>
using namespace std;

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-2)+fib(n-1);
}

int main(){

    int n;
    cin >> n;
    cout << fib(n);
    
    return 0;
}