// Toeplitz Matrix
/*
A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same element.
Now given an N x M matrix, print "YES"if and only if the matrix is Toeplitz, otherwise print "NO".
*/
#include <iostream>
#include <cmath>
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
            if(i<n-1 && j<m-1){
                if(a[i][j]!=a[i+1][j+1]){
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