/*
Balganym is developing an application that generates some random passwords. She is trying to use the
application to generate some password to update her previous one on her intranet account. It is known
that passwords for KBTU’s intranet system must meet the following requirements:
• The length of the password must be at least 8 characters.
• There must be at least one uppercase Latin letter (from A to Z).
• There must be at least one lowercase Latin letter (from a to z).
• There must be at least one digit (from 0 to 9).
Given a password from Balganym’s password generator, check if this password is a valid password for the
intranet system.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool a=false,b=false,c=false,d=false;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') a=true;
        else if(s[i]>='0' && s[i]<='9') b=true;
        else if(s[i]>='a' && s[i]<='z') c=true;
    }
    if(s.size()>=8) d=true;

    if(a && b && c && d) cout << "Yes";
    else cout << "No";

    return 0;
}