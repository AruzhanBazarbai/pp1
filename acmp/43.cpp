//Нули
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s,res="";
    cin >> s;
    int cnt=0,maxi=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') res+=s[i];
        if( s[i]=='1' || i==s.size()-1){
            if(maxi<res.size()){
                maxi=res.size();
            }
            res="";
        }
    }
    cout << maxi;
    
    return 0;
}