//You’re given N integers, your task is to find difference between maximum and minimum.
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        if(maxi<a[i]){
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(mini>a[i]){
            mini=a[i];
        }
    }
    cout << maxi-mini;

    return 0;
}