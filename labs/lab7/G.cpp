//Find n factorial.
#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

int main(){

    int n;
    cin >> n;
    cout << factorial(n);
    
    return 0;
}