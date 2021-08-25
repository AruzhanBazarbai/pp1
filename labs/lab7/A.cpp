//Find n-th degree of 2.
#include <iostream>
#include <cmath>
using namespace std;

int degree(int a, int n){
    if(n==0) return 1;
    return degree(a,n-1)*2;
}
        

int main(){
    int n;
    cin >> n;
    
    cout << degree(2,n);

    return 0;
}


