//You are given n points on the euclidean plane.Sort them firstly by x coordinate,and if x’s of some two
//points are equal sort them by y coordinate.

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
        
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout << a[i].first << " " << a[i].second << endl;
    }

}