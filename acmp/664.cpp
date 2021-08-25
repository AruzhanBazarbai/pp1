#include <iostream>
using namespace std;
int main(){
    int n,k,m;
    cin >> k >> m >> n;
    int time;
    if(n==1){
        cout << m*2;
    }else if(n%k==0){
        int c=n/k;
        cout << m*c;
    }else 
}
/*
int main(){
    int n,k,m;
    cin >> k >> m >> ;
    int time;
    if(k/2==n){
        time=2;
    }else if(n%k==1){
        time=n;
    }else{
        time=(n%k)-2;
    }
    cout << time << "\n";
    return 0;
}
*/