//You’re given string s. Print the maximum length of its substring that is not a palindrome. If there is no
//such substring print 0.

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool k=true;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            k=false;
            break;
        }
    }
    if(k){
         cout << 0;
         return 0;
    } 
    bool z=true;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            z=false;
            break;
        }

    }
    if(z) cout << s.size()-1;
    else cout << s.size();
    
    return 0;
}


