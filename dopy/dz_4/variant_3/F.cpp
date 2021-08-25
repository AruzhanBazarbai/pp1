//Problem F. 79066 Palindrom
/*
Given 2D array. Print "YES"if first and last line of an array is palindrome, otherwise print "NO".
Input
First line contains n, m - size of 2D array(1<=n<=100, 1<=m<=100). Then given elements of 2D array.
Output
Print solution for the problem.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int m,n;
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
            if(i==0 || i==n-1){
                if(a[i][j]!=a[i][m-1-j]){
                  k=false;
                  break;
                }
            } 
        }
    }
    if(k) cout << "YES";
    else cout << "NO";

    return 0;
}