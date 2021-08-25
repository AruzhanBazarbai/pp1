//You are given an integer N. You have to print the sum of numbers from 1 to N.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int s=n*(n+1);
    cout << s/2;
    
    return 0;
}