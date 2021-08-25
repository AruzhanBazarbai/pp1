/*
Sanzhar lives in a one-dimensional world. He is holding a big party this weekend at home. There are n
friends of Sanzhar, whom he would like to invite to the party. He knows where each of his friend lives,
which can be described by a single number xi — position relatively to Sanzhar’s home.
Sanzhar wants you to help with calculating distance to walk from their home to party for each of his
friends.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cout << abs(a[i]) << " ";
    }
    return 0;
}