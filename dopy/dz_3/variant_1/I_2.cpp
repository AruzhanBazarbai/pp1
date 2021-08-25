//badaev and amanov
#include <iostream>
using namespace std;
int c[100][100];
int main(){
    int n;
    cin >> n;
    int a[n][n],b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> b[i][j];
        }
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
               c[i][j]+=(a[i][k]*b[k][j]);
            }    
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}