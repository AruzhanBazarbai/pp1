//Given two sorted integer arrays a and b, merge a into b as one sorted array.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i=0;i<m; i++){
        cin >> b[i];
    }
    int c[n+m];
    for(int i=0; i<n+m;i++){
        if(i<n){
            c[i]=a[i];
        }
        else if(i>=n){
            c[i]=b[i-n];
        }
    }

    int k=n+m;
    sort (c,c+k);

    for(int i=0;i<n+m;i++){
        cout << c[i] << " ";
    }

    return 0;
}