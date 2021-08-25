#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main (){

    int n, m;
    cin >> n >> m;

    int a[n][m];
    int sum[n+m];

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
           cin >> a[i][j];
        }
    }


    for( int i = 0; i < n; i++ ){
        sum[i]=0;
        for( int j = 0; j < m; j++ ){
          sum[i]+=a[i][j];
        }
    }

    for( int j = 0; j < m; j++ ){
        sum[j+n]=0;
        for( int i = 0; i < n; i++ ){
          sum[j+n]+=a[i][j];
        }
    }
       
    
    for( int i = 0; i < n+m; i++ ){
        if( i < n){
            cout << "The sum of row number " << i+1 << " is " << sum[i] << endl;
        }else if( i >= n){
            cout << "The sum of column number " << i-n+1 << " is " << sum[i] << endl;
        }
    }
    return 0;
}