//Problem F. Sum of two numbers

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    int a[n];
    map<int,bool> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[a[i]+a[j]]=true;
        }
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        if(mp[x]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
    return 0;
}