//Problem D. 79065 L
/*
Given the number n. Print the nxn array by drawing the letter L using 1 to denote each pixel of the letter
and 0 for everything else.
Input
Input contains n - size of non array(3<=n<=100).
Output
Print letter L.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0) a[i][j]=1;
            else if(i==n-1) a[i][j]=1;
            else a[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}