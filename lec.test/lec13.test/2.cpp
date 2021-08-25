#include <iostream>
#include <algorithm>
using namespace std;

bool f1(int a,int b){
    if(a>b) return true;
    return false;
}
bool f2(int a,int b){
    if(a<b) return true;
    return false;
}
int main(){
    int a[]={4,8,9,10,25,1,85};
    int n=sizeof(a)/sizeof(int);
    sort(a,a+n,f);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
        
    return 0;
}