#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

bool pri(int n){
    for (int i=2;i*i<= n;i++){
        if(n%i==0){
            return false;
        }
    }   
    return true;
}
int prin(int a,int b,int n){
    if(b==n){
        return a-1;
    }
    if(pri(a)==true){
        return prin(a+1,b+1,n);
    }
    return prin(a+1,b,n);
}
int main(){
    int n;
    cin >> n;
    int p=prin(2,0,n);
    cout << prin(p,n,p+1);
}