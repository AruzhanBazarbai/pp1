//Rayan has a two-dimensional array with n rows and m columns. He wants to estimate the quality of the
//array with respect to some number x.
//Quality of a two-dimensional array with respect to x is calculated as the number of rows in the array that
//contains number x in them.
//Given a two-dimensional array and a number x, can you help Rayan with calculating the array’s quality
//with respect to x?
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    int x;
    cin >> x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x==arr[i][j]){
            cnt++;
            break;
            }
        }
    }
    cout << cnt;

    return 0;
}