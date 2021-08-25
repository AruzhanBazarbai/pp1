//Генератор паролей
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    int n,a,b,c;
    cin >> n >>  a >> b >> c;
    string res="";
    char d='A',e='a',f='0';

    
    
    while(a>0){
        res+=d;
        if(d=='Z') d='A';
        else d=char(int(d)+1);
        a--;
    }

    while(b>0){
        res+=e;
        if(e=='z') e='a';
        else e=char(int(e)+1);
        b--;
    }
        
    while(c>0){
        res+=f;
        if(f=='9') f='0';
        else f=char(int(f)+1);
        c--;
    }
            
    if(res.size()!=n){
        while(res.size()!=n){
            res+=d;
            if(res.size()==n)  break;
            res+=e;
            if(res.size()==n)  break;
            res+=f;
        }
    }
    
    cout << res;
    
    return 0;
}