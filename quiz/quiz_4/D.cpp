//Problem D. Polyglot
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
using namespace std;

int a[1000];

int main(){
    string s,t;
    cin >>  s >> t;
    size_t pos=0, pos2;
    int j=0,cnt=0;

    for(int i=0;i<s.size();i++){
        pos2=s.find(t,pos);
        if(pos2!=string::npos){
            a[j]=pos2;
            j++;
            cnt++;
            pos=pos2+1;
            
        }
    }

    for(int i=0;i<cnt;i++){
        cout << a[i] << " ";
    }

    return 0;
}