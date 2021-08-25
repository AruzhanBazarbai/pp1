//Художник
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=0;
        }
    }
    int t,x1,x2,y1,y2;
    cin >> t;

    for(int z=0;z<t;z++){
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                a[i][j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0) cnt++;
        }
    }
    cout << cnt;

    return 0;
}