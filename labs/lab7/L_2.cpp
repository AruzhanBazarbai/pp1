//You are given a string. Check is it palindrome or not?
#include <iostream>
#include <climits>
using namespace std;

string f(string s, int l, int r){
    if (s[l]!=s[r]) return "No";
    if(l>r) return "Yes";
    return f(s, l+1, r-1);
}

int main(){
    string s;
    cin >> s;
    int r=s.size()-1;

    cout << f(s,0,r);

    return 0;
}