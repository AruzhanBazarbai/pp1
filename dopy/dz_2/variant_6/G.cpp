//Post index
//If all the letters came from single post index, print «Yes» (without quotes).
//Otherwise, print «No» (without quotes).

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k=true;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            k=false;
            break;
        }
    }
    if(k) cout << "Yes";
    else cout << "No";

    return 0;
}