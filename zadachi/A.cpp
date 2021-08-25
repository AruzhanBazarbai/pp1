//Problem A. Random pair generator
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair<int,int> a[n];

    for(int i=0;i<n;i++){
        int cnt=0;
        cin >> a[i].first >> a[i].second;
    
        for(int j=0;j<=i;j++){
            if(i!=j)
            if(a[i].first==a[j].first && a[i].second==a[j].second) cnt++;
            else if(a[i].first==a[j].second && a[i].second==a[j].first) cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}
