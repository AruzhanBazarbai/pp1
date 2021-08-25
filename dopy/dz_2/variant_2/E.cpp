/*
You have n - number of trees, each tree has number of leaves. Once a day, weather was very windy, so
some leaves felt down. You are given n trees and number of leaves before and after the wind. Your task
is to find maximum number of leaves left on some tree.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=0; i<n;i++){
        cin >> b[i];
    }
    for(int i=0; i<n;i++){
        c[i]=a[i]-b[i];
    }

    int maxi=INT_MIN;

    for(int i=0; i<n;i++){
        if(maxi<c[i]){
            maxi=c[i];
        }
    }
    cout << maxi;

    return 0;
}