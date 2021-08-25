//Given two strings s and t, You must to write a FUNCTION isAnagram(string s, string t) to
//determine if t is an anagram of s.
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) return true;
    else return false;
}

int main(){
    string s,t;
    cin >> s >> t;
   
    if(isAnagram(s,t)) cout << "Yes";
    else cout << "No";
    return 0;
}