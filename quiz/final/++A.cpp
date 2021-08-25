//Problem A. Transaction

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int a1,a2,a3,a4,a5,a6,a7,a,n;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> n;
    a=a1*1+a2*2+a3*5+a4*10+a5*20+a6*50+a7*100;
    
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(a<x) cout << "Transaction stopped!" << endl;
        else if(a>=x){
            cout << "Transaction accepted!" << endl;
            a=a-x;
        }
    }
    

    return 0;
}
