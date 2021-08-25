//Given a sorted array and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.
//You may assume no duplicates in the array
#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int index=0;
    for(int i=0; i<n; i++){
        if(m>=a[i]){
            index=i+1;
        }
    }
    cout << index << "\n";
    return 0;
}