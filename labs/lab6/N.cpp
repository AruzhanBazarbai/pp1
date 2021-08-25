//Given an array of n x m elements. Write a function that transposes the array.
//Transposed array - array obtained by switching columns with rows of the array.


#include <iostream>

using namespace std;

void arr(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
    
int main(){
    arr();
    return 0;
   
       
}