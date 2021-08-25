#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];
    int mini=INT_MAX;
    int sum=0;

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
           cin >> a[i][j];
        }
    }
    int row, col;
    cout << "coordinates of min elements:" << endl;
    
    for( int j = 0; j < m; j++ ){
        mini=INT_MAX;
        for( int i = 0; i < n; i++ ){
            if(mini > a[i][j]){
             mini=a[i][j];
             row=i+1;
             col=j+1;
            }
        }
        cout << row << ";" << col << endl;
        sum+=mini;

    }
       
    cout << "Their sum:" << endl;
    cout << sum;
    return 0;
}