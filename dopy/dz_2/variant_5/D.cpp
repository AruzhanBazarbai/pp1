/*
All the letters «a» will be replaced by letters «b», letters «b» — by «c» and so on. If
there is a letter «z» in her password, it will be replaced by the letter «a».
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<'z') s[i]=char(int(s[i])+1);
        else if(s[i]=='z') s[i]='a';
    }
    for(int i=0;i<s.size();i++){
        cout << s[i];
    }
    return 0;
}