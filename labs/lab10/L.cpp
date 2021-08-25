//. Arithmetic progression in a nutshell
/*
Dina loves her young brother. She wants to teach him arithmetic progression. To show what is the
arithmetic progression and it’s sum, she decided to write sequence like 1 2 2 3 3 3. Help Dina to teach
him.
Input
Input contains only one single integer N(the last number of the sequence).
Output
Create required sequence. All members should be in the same row separated by single empty space.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int cnt=0;
    v.push_back(1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            v.push_back(i);
            cnt++;
        }
        
    }
    for(int i=1;i<=cnt;i++){
        cout << v[i] << " ";
    }
   
    
    return 0;
}
