/*

Given a string s. You need to write a function that validates the string.
 Valid string is the string that
contains n or more consequent digits.
*/

#include <iostream>

using namespace std;
    
int main(){
    string s;
    int x;
    cin >> s >> x;
    int cnt = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9' ){
            cnt++;
            if(cnt==x){
                cout << "Valid";
                return 0;
            }
        }
        if(s[i]<'0' || s[i]>'9') cnt=0;
    }
    
    cout << "Not valid";
    
    return 0;
       
}

