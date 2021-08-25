#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int cheater(int * a,int i,int n,int k){
    if(i>n-1) return true;
    if(a[i+1]-a[i]<k) return false;
    return cheater(a,i+1,n,k);
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);

   
    if(cheater(a,0,n,k)) cout << "no";
    else cout << "cheater";
    
    return 0;

   
}