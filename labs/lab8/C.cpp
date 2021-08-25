/*
You are given n integers. Then index ranges a and b, (0 ≤ a < b ≤ n − 1). Your task is to reverse array
elements in a given range ([a...b] — index range bounds inclusively). Store n integers in a vector.
Input:
The first line of input contains the number n - the number of integers.
The second line contains a sequence of integers. The third line contains integers a and b
Output:
Print out result sequence
*/
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
    int a,b;
    cin >> a >> b;

    reverse(v.begin()+a,v.begin()+b+1);
    vector<int> :: iterator it;

    for(it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }

    return 0;
}