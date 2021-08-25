//Write a program that prints an n x n matrix that every row is increment(increasing) odd number
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int b=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=b;
        }
        b+=2;
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }    
    return 0;

}