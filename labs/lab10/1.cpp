#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string x;
    int min=1e9;
    string res="";
    for(int i=0;i<s.size();i++){
       
       if(i==s.size()-1){
           res+=s[i];
       }
        if(s[i]==' ' || i+1==s.size()){
           if(min>res.size()){
               min=res.size();
               x=res;
               res="";

           }
       }else{
           res+=s[i];
       }
    }
    cout << x;
    return 0;
}
