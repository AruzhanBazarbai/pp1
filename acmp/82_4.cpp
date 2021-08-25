#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;
    string x;
    set<long long> s;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin >> x;
        if(mp[x]==0) mp[x]++;
    }
    for(int i=0;i<m;i++){
        cin >> x;
        if(mp[x]==1){
            mp[x]=2;
            long long b=stoi(x);
            s.insert(b);
        }
    }

    set<long long> :: iterator it;

    for(it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }
    

    return 0;
}