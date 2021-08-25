#include <iostream>
#include <climits>
using namespace std;

bool f1(string  s,int l,int r, bool k){
    if(l==r) return k;
    if(s[l]==s[r]) k=true;
    if(s[l]!=s[r]) k=false;
    return f1(s,l+1,r-1, k);
}

int main(){
    string s;
    cin >> s;
    int r=s.size();
    bool k=true;

    if(f1(s,0,r-1,k)) cout << "Yes";
    else cout << "No";
    
    return 0;
}