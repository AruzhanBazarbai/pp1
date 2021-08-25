#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;
map<long long,long long> mp;
int main (){
    long long n,m,x;
    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        cin >> x;
        mp[x]++;
    }
    for(int i=0;i<m;i++){
        cin >> x;
        mp[x]++;
        if(mp[x]>1) cout << "YES" << " ";
        else cout << "NO" << " ";
    }
    
    return 0;
}