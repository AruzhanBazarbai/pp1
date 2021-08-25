//need to find the largest number
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }  
    int maxi=-1e9; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(maxi<a[i][j]){
                maxi=a[i][j];
        }
        
    }  
    } 
     cout << maxi << "\n";
    return 0;
}