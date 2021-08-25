//проверить число на палиндромность

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[4];

    int i=0;

    while(n>0){
        a[i]=n%10;
        n=n/10;
        i++;
    }

    bool k=true;

    for(int i=0;i<2;i++){
        if(a[i]!=a[3-i]) k=false;
    }
     
    if(k) cout << "YES";
    else cout << "NO";

    return 0;
}