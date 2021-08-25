//Problem C. Fence

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
    int a[n];
    int maxi=0;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    set<int> s;
    reverse(a,a+n);

    for(int i=0;i<n;i++){
        if(maxi<a[i]){
            maxi=a[i];
            s.insert(a[i]);
        }
    }
    cout << s.size() << endl;

    return 0;
}

