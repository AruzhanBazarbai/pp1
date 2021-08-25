#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    string s;
    
    map<string,int> m;

   
    while(cin >> s){
        m[s]++;
    }
    

    map<string,int> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
        if((*it).second>=2) cout << (*it).first << endl;
    }

    return 0;
}