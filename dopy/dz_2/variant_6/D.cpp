//shift+delete
//Output a string in a single line — string s, from which all occurrences of letter c are deleted.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    char t;
    cin >> t >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t) cout << s[i];
    }
    
    return 0;
}