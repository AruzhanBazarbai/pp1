//odd recursion
/*
Write a recursive function to print all odd integer numbers in given range l, r.

*/
#include <iostream>

using namespace std;

int a[10000];

int f(int l,int r,int * a,int i,int cnt){
    if(l>=r) return cnt;
    a[i]=l;
    return f(l+2,r,a,i+1,cnt+1);
    
}

int main(){
    int l,r;
    cin >> l >> r;
    int res;
    if(l%2==0) res=f(l+1,r,a,0,0);
    else res=f(l,r,a,0,0);
    
    for(int i=0;i<res;i++){
        cout << a[i] << " ";
    }
    if(r%2!=0) cout << r;
    
  

    return 0;
}