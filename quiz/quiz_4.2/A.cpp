//Problem A. Seems easy but not
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

bool f(pair<int,string> a, pair<int,string> b){
    if(a.first>b.first) return true;
    else if(a.first==b.first && a.second<b.second) return true;
    
}

int main(){
    string s;
    getline(cin,s);

    map<string,int> m;

    string res="";

    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
           res+=s[i];
        }
        if(s[i]==' ' || i+1==s.size()){
            m[res]++;
            res="";
        }else{
           res+=s[i];
        }
    }

    map<string,int> :: iterator it;
    
    vector<pair<int,string> > v;

    for(it=m.begin();it!=m.end();it++){
        v.push_back(make_pair((*it).second,(*it).first));
    }
    
    sort(v.begin(),v.end(),f);
    
    for(int i=0;i<v.size();i++){
        cout << v[i].second << " : " << v[i].first << endl;
    }
    
    return 0;
}
