//Домашнее задание
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0,maxi=-1e9, mini=1e9, l,r;
    for(int i=0;i<n;i++){
        if(a[i]>0) sum+=a[i];
        if(maxi<a[i]){
            maxi=a[i];
            r=i;
        }
        if(mini>a[i]){
            mini=a[i];
            l=i;
        }
    }

    int cnt=1;
    if(l>r){
        for(int i= r+1;i<l;i++){
            cnt*=a[i];
        }
    }else{
        for(int i=l+1;i<r;i++){
            cnt*=a[i];
        }
    }

    cout << sum << " " << cnt;
    return 0;
}