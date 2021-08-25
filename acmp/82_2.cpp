#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
//map<long long,int> mp;
int main (){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    set<int> s;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                s.insert(a[i]);
                break;
            }
        }
    }

    set<int> :: iterator it;

    if(s.empty()) cout << " ";

    else{
        for(it=s.begin();it!=s.end();it++){
            cout << *it << " ";
        }
    }
    return 0;
}