//asy problem for you. You are given number N. Sum the N, previous number N, next number N.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
 
    cout << (n-1)+n+(n+1);
 
    return 0;
}