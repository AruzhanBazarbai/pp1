//christmas tree
#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int n;
    cin >> n;
    int m=n*2-1;
    for(int j=1;j<n+1;j++){
        for(int i=1;i<n-j+1;i++){
            cout << ".";
        }  

        for(int i=0;i<j*2-1;i++){
            cout << "*";
        }
    
        for(int i=1;i<n-j+1;i++){
            cout << ".";
        }
        cout << endl;
    }
    
    
   
    return 0;     
}
