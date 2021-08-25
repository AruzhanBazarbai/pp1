#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    int a[n][m];
    int b=0;
        for(int i=0;i<n;i+=2 ){ 
             for(int j=0;j<m;j++){
               a[i][j]=b;
                b++;
            }
        b=m*2;
    } 
    b=m;
    for(int i=1;i<n;i+=2 ){
        for(int j=m-1;j>=0;j--){
            a[i][j]=b;
            b++;
        }
        b=m*3;
    }
    
        for(int i=0;i<n;i++){
             for(int j=0;j<=m;j++){
               a[i][j]=b;
            }
            b++;
        } 
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
           cout << a[i][j] << " ";
        }
      cout << endl;
    }
    return 0;
}