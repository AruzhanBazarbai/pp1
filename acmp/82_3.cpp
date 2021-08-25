#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;
    map<long long,int> mp;
    long long x;

    for(int i=0;i<n;i++){
        cin >> x;
        if(mp[x]==0) mp[x]++;
    }
    for(int i=0;i<m;i++){
        cin >> x;
        if(mp[x]==1) mp[x]++;
    }

    map<long long,int> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        if((*it).second==2) cout << (*it).first << " ";
    }

    return 0;
}