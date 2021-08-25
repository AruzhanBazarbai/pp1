//R
/*
You have an integer number N. Find the minimal number of operation to reach 1. You have operations
divide by 2(only if divisible), divide by 3(only if divisible), subtract 1.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt=0;
    while(n!=1){
        if(n%3==0){
                n=n/3;
                cnt++;
        }else if(n%3==1){
                n=n-1;
                cnt++;
        }else if(n%3==2 && n!=2){
            n=n+1;
            cnt++;
        }else if(n==2){
            n=n/2;
            cnt++;
        }
    }
    cout << cnt;

    
    return 0;
}