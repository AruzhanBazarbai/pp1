//Write a program that prints an n x n matrix like done below
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout << j+1 << " ";
            }else{
                cout << i+1 << " ";

            }
        }
        cout << endl;
    }

    
    return 0;
}