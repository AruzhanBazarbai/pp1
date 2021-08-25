/*
You are given a string S of length N, consisting of uppercase English letters, and an integers L and R which
are between 1 and N (inclusive). Print the string S after lowercasing characters between L and R.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int l,r;
    cin >> l >> r;

    for(int i=0; i<s.size();i++){
        if( i >= l-1 && i <= r-1){
            cout << char(s[i]+32);
        }else{
            cout << s[i];
        }
    }

    return 0;
}