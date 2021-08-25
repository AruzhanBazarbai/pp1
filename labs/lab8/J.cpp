/*
Input:
You are given n, (1 ≤ n ≤ 100) integers, each integer v[i], (1 ≤ v[i] ≤ 1000).
Output:
Output difference between the largest and smallest values in the sequence
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
    set<int> :: reverse_iterator it;

    
    cout << *s.rbegin()-*s.begin();

    return 0;
}
