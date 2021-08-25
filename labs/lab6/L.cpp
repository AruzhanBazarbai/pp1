#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

void valid2(string s, int n){
    int cnt=0;
    bool k=true;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            cnt++;
            if(cnt==n){
                cout << "Valid";
                k=false;
                break;
            }
        }
        if(s[i]<'0' || s[i]>'9'){
            cnt=0;
        }
    }
    if(k) cout << "Not valid";
}

int main (){
    string s;
    int n;
    cin >> s >> n;
    valid2(s,n);
    return 0;
    
}