//Ermek and palindrom
/*
Ermek has a string s consisting of only lowercase English letters. He wants to change exactly one character
from the string so that the resulting one is a palindrome
*/
#include <iostream>
#include <cmath>
using namespace std;

int f(string s,int i,int t,int cnt){
    if(i>t-1) return cnt;
    if(s[i]!=s[t-1]) cnt++;
    return f(s,i+1,t-1,cnt);
}

int main(){

    string s;
    cin >> s;
    int t=s.size();
    int cnt=f(s,0,t,0);
    if(cnt==1) cout << "Yes";
    else cout << "No";

    return 0;
}