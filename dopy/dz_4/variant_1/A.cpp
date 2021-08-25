//Problem A. 79054. Battleship
/*
Given 2D array. Then k times given coordinates of cells i, j that need to be bombed. Print amount of all
surviving sells.
Input
First line contains n, m - size of 2D array(1<=n<=10, 1<=m<=10). Second line contains k - amount of
bombing(0<=k<=10). Then n times given i, j - coordinates of cells that need to be bombed(0<=i<=10,
0<=j<=10).
Output
Print solution for the problem.
*/
#include <iostream>
#include <map>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;

    bool a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=true;
        }
    }
    for(int z=0;z<k;z++){
        int x,y;
        cin >> x >> y;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(i==x && j==y) a[i][j]=false;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}