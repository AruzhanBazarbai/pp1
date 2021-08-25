/*
Your task is to numerate the sides of 2D array in increasing order, from left to right, from upper to down
and remember to put whitespaces inside of the resultant box.
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i==0 || i==n-1){
                cout << i+j << " ";
            }else if(j==0 || j==n-1){
                cout << i+j << " ";
            }else{
                cout << "  ";
            }
        
        }
        cout << endl;
    }

    return 0;
}