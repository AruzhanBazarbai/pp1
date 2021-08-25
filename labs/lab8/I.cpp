/*
Input:
You are given n, (1 ≤ n ≤ 100) positive integers, each integer v[i], (1 ≤ v[i] ≤ 1000). Then one integer
number k, (1 ≤ k ≤ 1000).
Output:
Output Y es if k found at least ones in the sequence, No otherwise.
*/
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    set<int> s;
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        s.insert(x);

    }
    int k;
    cin >> k;
    
    if(s.find(k)==s.end()) cout << "No";
    else cout << "Yes";

    return 0;
}
