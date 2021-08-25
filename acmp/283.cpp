//Рунные слова
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    string s,res="";
    getline(cin,s);
    bool k=true;

    if(s[0]<'A' || s[0]>'Z'){
        cout << "No";
        return 0;
    }

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'  && s[i+1]>='A' && s[i+1]<='Z'){
            k=false;
            break;
        }else if(s[i]>='A' && s[i]<='Z' && i!=0 && i!=s.size()-1){
            if(res.size()>4){
                k=false;
                break;
            }
            res="";
            res+=s[i];
        }else if(i==s.size()-1){
            if(s[i]>='A' && s[i]<='Z'){
                k=false;
                break;
            }
            res+=s[i];
            if(res.size()>4){
                k=false;
                break;
            }
            res="";
        }else res+=s[i];
    }

    if(k) cout << "Yes";
    else cout << "No";

    return 0; 
}