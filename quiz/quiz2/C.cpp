//You are given an array of integer numbers. Print its mode. Mode is the number that occurs most frequently
//in the array. If there is several modes, print them in descending order.

#include <iostream>
#include <algorithm>
#include <climits>
int cnt[1000];
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];


    }
    int maxi=0;
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
        maxi=max(maxi,cnt[a[i]]);
    }
    
    for(int i=1000;i>0;i--){
        if(maxi==cnt[i]){
            cout << i << " ";
        }
        
    }
    
    return 0;
}


