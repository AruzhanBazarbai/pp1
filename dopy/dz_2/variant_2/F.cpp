//Rahat thinks that 4 and 7 are lucky numbers. You are given integer number n. Please print all lucky
//numbers that are less or equal to number n.
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void f(int n,int b){
    bool k=true;
    int b1=b;
    while(b>0){
        if(b%10!=4 && b%10!=7){
            k=false;
            break;
        }
        b=b/10;
    }
    if(k) cout << b1 << endl;
    if(b1<n){
       return f(n,b1+1);
    }

}

int main(){
    int n;
    cin >> n;
    f(n,4);
    
    return 0;
}