//matrix non square
/*
You are given a matrix containing n rows and m columns, each cell contains zero or one. We call such a
matrix cool if it does not have a single 2 by 2 square filled entirely with zeros or whole ones.
You have to determine is given matrix cool or not.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    bool k=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1){
                k=false;
                break;
            }else if(a[i][j]==0 && a[i][j+1]==0 && a[i+1][j]==0 && a[i+1][j+1]==0){
                k=false;
                break;
            }
        }
    }
    if(k) cout << "YES";
    else cout << "NO";
    

    return 0;
}