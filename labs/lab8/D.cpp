//You are given n integers. Then you are given an integer k — index in the vector. 
//Your task is to erase value at given index k.
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);

    }
    int k;
    cin >> k;
    
    v.erase(v.begin()+k);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}