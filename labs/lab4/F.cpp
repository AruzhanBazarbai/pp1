//вывести позицию максимума
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
    int maxi=-1e9,row, col;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>maxi){
                maxi=a[i][j];
                row=i;
                col=j;
            }
        
        
        }
    }
    cout << ++row << " " << ++col << "\n";

    return 0;
}

