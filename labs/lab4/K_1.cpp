#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int b[n+m];
    int c[n+m];
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        b[i]=0;
        for(int j=0;j<m;j++){
            b[i]+=a[i][j];
        }
        
    }
    for(int i=0;i<m;i++){
        c[i]=0;
        for(int j=0;j<n;j++){
            c[i]+=a[j][i];
        }
       
    }
    for(int i=0;i<m+n;i++){
        for(int j=0;j<1;j++){
           if(i<n) cout << "The sum of row number" << " " << i+1 << " " << "is" << " " << b[i] << endl;
            else cout <<  "The sum of column number" << " " << i-n+1 << " " << "is" << " " << c[i-n] << endl;
        }
    }
   
   
   

    return 0;
}

