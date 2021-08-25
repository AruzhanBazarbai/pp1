//You are given N integers. Your task is to reverse sequence of integers. Store N integers in a vector
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
    vector<int> :: reverse_iterator it;

    for(it=s.rbegin();it!=s.rend();it++){
        cout << *it << " ";
    }

    return 0;
}