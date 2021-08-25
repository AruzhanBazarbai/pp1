//output count of negative numbers in array
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }  
    int mini=0, count=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mini> a[i][j]){
                count++;
            }
            
        }
    }  
    cout << count << "\n";
    return 0;
}

