#include <iostream>
#include <cmath>
#include <set>
using namespace std;

unsigned long long factorial(unsigned long long n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

int main (){
    unsigned long long n;
    cin >> n;
    cout << factorial(n);
    return 0;
}