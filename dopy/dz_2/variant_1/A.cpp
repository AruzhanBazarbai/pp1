/*
Very easy problem for you=). You need to find even and odd and replace them with 0 and 1. Good luck
=)
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    int x;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cin >> x;
        a[i][j]=abs(x%2);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cout << a[i][j] << " ";
        }
    cout << endl;
    }


    return 0;
}