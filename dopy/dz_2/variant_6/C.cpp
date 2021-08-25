/*
In this task you have to generate a two dimensional array of n rows and n columns.
Each cell’s value is to be set by its distance from the cell (1, 1). Distance from one cell to another is
defined by the minimum number of crossings between cells that share a side in some path between given
two cells. For clearance, discover the given test cases.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int k=0;
    for(int i=0;i<n;i++){
        int c=k;
        for(int j=0;j<n;j++){
            a[i][j]=k;
            k++;
        }
        k=c+1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}