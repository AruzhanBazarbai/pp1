//Problem F. Max Word
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    string t;
    int maxi=0;
    string res="";

    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
           res+=s[i];
        }
        if(s[i]==' ' || i+1==s.size()){
           if(maxi<res.size()){
               maxi=res.size();
               t=res;
            }
            res="";
        }else{
           res+=s[i];
        }
    }
    cout << t;

    return 0;
}
