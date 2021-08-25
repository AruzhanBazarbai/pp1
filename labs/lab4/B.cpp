//need to find the second largest number
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
    int sec=-1e9;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>maxi){
                sec=maxi; 
                maxi=a[i][j]; 
            }else if(sec<a[i][j] && a[i][j]!=maxi){
                sec=a[i][j];
            }
        }
       
    }  
    if(sec==-1e9){
        cout << "0";
    }else{
        cout << sec << "\n";
    }
    
    return 0;
}

