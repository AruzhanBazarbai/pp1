//You are given an array. Find the index of the element whose parity is different from the parity of the
//other elements.
//Guaranteed that only one number has different parity
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int temp1,temp2;
    int cntE=0,cntO=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
             cntE++;
             temp1=i+1;
        }
        if(a[i]%2==1){
            cntO++;
            temp2=i+1;
        }
    }
    if(cntE==1) cout << temp1;
    else if(cntO==1) cout << temp2;
    
    return 0;
}