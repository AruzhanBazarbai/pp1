/*
Rayan has a two-dimensional array with n rows and m columns. He wants to estimate the quality of the
array with respect to some number x.
Quality of a two-dimensional array with respect to x is calculated as the number of rows in the array that
contains number x in them.
Given a two-dimensional array and a number x, can you help Rayan with calculating the array’s quality
with respect to x?
Input
The first line of input contains three space-separated integers n, m, x — the number of rows and columns
of the array and the number that’s used to calculate the quality (1 ≤ n, m ≤ 200, 1 ≤ x ≤ 106
).
Output
Output a single integer — the number of rows containing x.
*/
#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}