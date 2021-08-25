//Write a program to check whether a number prime or not.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool k=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            k=false;
            break;
        }
    }
    if(k) cout << "yes";
    else cout << "no";

    return 0;
}