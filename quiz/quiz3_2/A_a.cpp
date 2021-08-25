#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//problem A  Done

int main(){
 
    int n;
    cin >> n;
 
    map<int,int> val;
 
    for(int j=0; j<n; j++){
        int x;
        cin >> x;

        val[x]++;
    }
 
    int q;
    cin >> q;

    vector<int> ask;
 
    for(int i=0; i<q; i++){
        int a;
        cin >> a;

        ask.push_back(val[a]);
    }
 
    vector<int>::iterator it;
 
    for(it=ask.begin(); it!=ask.end();it++){

        cout << (*it) << endl;
    }
 
    return 0;
}

