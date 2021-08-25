//Given a string s. You need to write a function that validates the string. Valid string is the string that
//contains n or more digits.

#include <iostream>

using namespace std;
    
int main(){
    string s;
    int x;
    cin >> s >> x;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            cnt++;
        }
    }
    if (cnt==x or cnt>x){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
       
}