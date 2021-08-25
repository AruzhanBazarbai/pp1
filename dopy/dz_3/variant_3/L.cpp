//internet
/*
In order to access the Internet, each computer is assigned a so-called IP-address. It consists of four
integers of range [0, 255] separated by dots. The next three rows show three correct IP-address: 127.0.0.0
192.168.0.01 255.00.255.255
Write a program that determines whether a given string is a valid IP-address.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    string res="";
    bool k=true;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='-' && s[i+1]=='0') res+="0" ;
        else if(s[i]!='.' && s[i]!='-' && s[i+1]!='0'){
            res+=s[i];
        }else{
            if(!(res>="0" && res<="255")) k=false;
            res="";
        }
        
    }
    if(k) cout << "1";
    else cout << "0";

    return 0;
}