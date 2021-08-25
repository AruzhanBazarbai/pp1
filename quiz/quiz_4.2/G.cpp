//Problem G. Merge
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int n,m,x;
    cin >> n;
    vector<int> v;

    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> m;

    for(int i=0;i<m;i++){
        cin >> x;
        v.push_back(x); 
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    
    return 0;
}