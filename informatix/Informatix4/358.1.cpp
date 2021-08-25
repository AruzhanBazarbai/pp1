#include <iostream>
#include <climits>
using namespace std;
int main(){
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
    int maxi=INT_MIN;
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(maxi<a[i][j]){
               maxi=a[i][j];
               index=i;
           }
        }
    }
    cout << index << endl;
    return 0;
}