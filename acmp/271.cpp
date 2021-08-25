//Числа Фибоначчи - 2
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long a[1000000];

void f(int n){
    int c=1,d=1,res=0;
    a[0]=1;
    a[1]=1;
    int cnt=2;

    for(int i=2;i<=1000 && d<=n;i++){
        a[i]=c+d;
        c=d;
        d=a[i];
        cnt++;
    }
    bool k=true;
    for(int i=0;i<cnt;i++){
        if(a[i]==n){
            cout << 1 << endl << i+1 << endl;
            k=false;
            break;
        }
    }
    if(k) cout << 0;
}
int main(){
    int n;
    cin >> n;
    f(n);
    return 0; 
}