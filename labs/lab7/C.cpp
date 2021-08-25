//You are given a sorted array. Try to find number x from this array.
#include <iostream>
#include <cmath>
using namespace std;

bool find(int * a, int n, int i,int x){
    if(i>n-1) return false;
    if(a[i]==x) return true;
    return find(a,n, i+1, x);
}

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
         cin >> a[i];
    }

    int x;
    cin >> x;

    if(find(a,n,0,x)==true) cout << "Yes";
    else cout << "No";
    
    return 0;
}