//Лиса Алиса и кот Базилио
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int n,cntB=0,cntA=0;
    cin >> n;
    if(n%5==0){
         cout << n/5 << " " << 0;
         return 0;
    }

    while(n>0 && n%3!=0){
        n=n-5;
        cntB++;
    }

    if(cntB!=0 && n%3==0){
        cntA=n/3;
        int c=cntA/5;
        cntB=cntB+3*c;
        cntA=cntA%5;
        cout << cntB << " " << cntA;
        return 0;
    }

    while(n>0 && n%5!=0){
        n=n-3;
        cntA++;
    }

    if(cntA!=0 && n%5==0){
        cntB=n/5;
        int c=cntA/5;
        cntB=cntB+3*c;
        cntA=cntA%5;
        cout << cntB << " " << cntA;
        return 0;
    }
    
    return 0;
}