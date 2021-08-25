//You are given n, (1 ≤ n ≤ 100) integers, each integer v[i], (1 ≤ v[i] ≤ 1000).
//Create new sequence with unique elements. Then remove even numbers from new sequence
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

    set<int> :: iterator it;
    


    for(it=s.begin();it!=s.end();++it){
        if((*it)%2!=0){
            cout << *it << " ";
        }
    }



    return 0;
}
