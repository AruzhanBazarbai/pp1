//Problem G. Convert
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int n,toS,toB;
    string s;
    cin >> n >> toS >> toB >> s;
    int cntS=0, cntB=0;

    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z') cntS++;
        else if(s[i]>='A' && s[i]<='Z') cntB++;
    }

    if(cntS==0 || cntB==0){
        cout << 0;
        return 0;
    }else{
        int c,d;
        c=cntS*toB;
        d=cntB*toS;
        int x=min(c,d);
        cout << x;
    }
    
    return 0;
}
