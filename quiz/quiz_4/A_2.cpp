#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    unordered_pair<long long int,long long int> a[n];

    for(long long int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
        long long int cnt=0;
        for(long long int j=0;j<=i;j++){
            if(i!=j){
                if(a[i].first==a[j].first && a[i].second==a[j].second) cnt++;
                else if(a[i].first==a[j].second && a[i].second==a[j].first) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}