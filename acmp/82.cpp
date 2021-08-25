#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

long long a[300000],b[300000];

int main (){
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        a[x]++;
    }
    for(int i=0;i<m;i++){
        long long x;
        cin >> x;
        b[x]++;
    }

    set<long long> s;
    for(int i=0;i<300000;i++){
        if(a[i]>0 && b[i]>0){
           s.insert(i);
        }
    }
    if(s.empty()) cout << " ";
    else{
        set<long long> :: iterator it;

        for(it=s.begin();it!=s.end();it++){
            cout << *it << " ";
        }
    }
    
    
    return 0;
}