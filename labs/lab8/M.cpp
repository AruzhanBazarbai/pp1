/*
Input:
You are given n, (1 ≤ n ≤ 100) integers, each integer v[i], (1 ≤ v[i] ≤ 1000).
Output:
Print out single number — the sum of unique elements.
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
    
    int sum=0;

    set<int> :: iterator it;
    


    for(it=s.begin();it!=s.end();++it){
        sum+=(*it);
    }

    cout << sum;


    return 0;
}
