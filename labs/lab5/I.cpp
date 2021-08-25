//Let’s call two strings s and t nearly equal, if amount of every letter in s and t is equal. You need to answer,
//is two strings are nearly equal.
#include <iostream>
using namespace std;
int a[26]; 
int b[26];
int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.size(); ++i){
        a[s[i] - 'a']++;
    }
    for(int i = 0; i < t.size(); ++i){
        b[t[i] - 'a']++;
    }
    bool k = true;
    for(int i = 0; i < 26; i++){
        if(a[i] != b[i]){
            cout << "NO";
            k = false;
            return 0;
        }
    }
    if(k) cout << "YES";
}