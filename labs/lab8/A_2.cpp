//You are given N integers. Sort the N integers by ascending order. Store N integers in a vector.
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> s;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        s.push_back(x);

    }
    sort(s.begin(),s.end());
    vector<int> :: iterator it;

    for(it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }

    return 0;
}