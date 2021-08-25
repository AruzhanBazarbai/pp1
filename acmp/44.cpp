//Стрелки
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string s,a="<--<<",b=">>-->";
    cin >> s;
    int cnt=0;
    size_t pos=0, fpos;

    for(int i=0;i<s.size();i++){
        fpos=s.find(a,pos);
        if(fpos!=string::npos){
            pos=fpos+1;
            cnt++;
        }
    }
    pos=0;
    for(int i=0;i<s.size();i++){
        fpos=s.find(b,pos);
        if(fpos!=string::npos){
            pos=fpos+1;
            cnt++;
        }
    }
    cout << cnt;

    
    
    return 0;
}