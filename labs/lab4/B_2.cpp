#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main (){

    int n;
    cin >> n;

    int a[n][n];

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            cin >> a[i][j];
        }
    }

    int maxi = INT_MIN;
    int thirdMaxi, secMaxi=0;

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if( maxi < a[i][j] ){
                thirdMaxi = maxi;
                maxi = a[i][j];
            }
        }
    }

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if( a[i][j] >= thirdMaxi && a[i][j] < maxi){
                secMaxi = a[i][j];
            }
        }
    }
    
    cout << secMaxi;

    return 0;
}