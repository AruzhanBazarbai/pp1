/*
Devl is a short heighted person. He is standing facing N pillars of different heights with i-th pillar having
height hi. He tries to see all the possible pillars. He wants to know that how many buildings will he be
able to see in the range [L, R] both inclusive.
Input
The first line contains an integer N denoting the number of pillars. Next line contains N integers denoting
height of i-th pillar. Next line contains a single integer Q. Next Q lines contain pairs L and R respectively.
Output
For every Q queries print the number of buildings visible in the range [L, R].
*/
#include <iostream>
using namespace std;

int b[1000];

void res(int * a, int l, int r, int cnt){
    int t=0;
    b[t]=a[l];
    t=1;
    
    for(int i=l+1;i<=r;i++){
        bool k=true;
        for(int j=0;j<cnt;j++){
            if(a[i]<=b[j]){
                k=false;
                break;
            }
        }
        if(k){
            b[t]=a[i];
            t++;
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int cnt=1;

    for(int i=0;i<m;i++){
        int l,r;
        cin >> l >> r;
        res(a,l,r,cnt);
    }

    return 0;
}