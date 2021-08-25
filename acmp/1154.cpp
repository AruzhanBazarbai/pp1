//IP-адрес
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long res=0;
    bool k=true;

    if(s[0]=='.' || s[s.size()-1]=='.'){
        cout << "Bad";
        return 0;
    }

    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='.' && s[i+1]=='.'){
            k=false;
            break;
        }else if(s[i]=='.'){
            if(res<0 || res>255){
                k=false;
                break;
            }
            res=0;
        }else if(i==s.size()-2){
            res=res*10+(s[i]-'0');
            res=res*10+(s[i+1]-'0');
            if(res<0 || res>255){
                k=false;
                break;
            }
            res=0;
        }
        else{
            res=res*10+(s[i]-'0');
        }

    }
    if(k) cout << "Good";
    else cout << "Bad";
    

    
    return 0; 
}