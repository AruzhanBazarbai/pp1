//The secondary diagonal of a matrix consists of those elements that lie on the diagonal that runs from top
//right to bottom left.
//Return the sum of elements that lie on it.
#include <iostream>
#include <cmath>
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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                sum+=a[i][j];
            }
        }
    }  
    cout << sum << endl;
   
    return 0;     
}