//Problem F. K-th common divisor
/*
You are given positive integers A and B.
Find the K-th largest positive integer that divides both A and B.
The input guarantees that there exists such a number.
Input
You are given A, B, K respectively.
Output
Print the K-th largest positive integer that divides both A and B.
*/
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int a[10000];

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int z=0,cnt=0;
    
    int b=min(n,m);

    for(int i=1;i<=b;i++){
        if(n%i==0 && m%i==0){
            a[z]=i;
            z++;
            cnt++;
        }
    }
    reverse(a,a+cnt);
    for(int i=0;i<cnt;i++){
        if(i==k-1) cout << a[i];
    }
        
    return 0;
}