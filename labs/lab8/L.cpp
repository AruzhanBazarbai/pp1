/*
Input:
You are given n, (1 ≤ n ≤ 100) integers, each integer v[i], (1 ≤ v[i] ≤ 1000).
Output:
Print out single number — the number of unique elements
*/
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    set<int> s;
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        s.insert(x);

    }
    cout << s.size();


    return 0;
}
