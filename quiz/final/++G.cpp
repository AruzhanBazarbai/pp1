//Problem G. Sharky and primes
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int primes(int a,int b){
    bool k=true;

    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            k=false;
            break;
        }
    }
    for(int i=2;i<=sqrt(b);i++){
        if(b%i==0){
            k=false;
            break;
        }
    }
    if(k) cout << a << " " << b ;
    else return primes(a+1,b-1);
}

int main(){
    int n;
    cin >> n;

    primes(2,n-2);

    return 0;
}