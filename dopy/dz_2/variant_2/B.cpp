/*
You are given one int number. You have to find is this number fibonacci number or not? Fibonacci is ->
0, 1, 1, 2, 3, 5, 8, 13...
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int f1=0, f2=1;
    int f=f1+f2;
    while(f<=n){
        
        if(f==n){
            cout << "YES";
            return 0;
        }
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    cout << "NO";

    return 0;
}