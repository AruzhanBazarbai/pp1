//You’re given two strings s and t. You need to answer, can we take string t by copy and pasting string s.

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string ss=s;
    
    while(s.length() < t.length()){
        s+=ss;
    }
   
    if(s == t){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    
    return 0;
}