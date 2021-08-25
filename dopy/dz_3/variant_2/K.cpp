/*
Normal chess boards have size 8x8, but in this problem, your task is to generate a chess matrix of size
n rows and m columns. Chess matrix’s cells are filled with one of the two colors: white or black. No two
adjacent cells sharing a side can have the same color. The color of the leftmost top cell is black. In a chess
matrix, number 1 corresponds to the black color, and 0 corresponds to the white color.
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

void f(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                if(j%2==0) a[i][j]=1;
                else a[i][j]=0;
            }else{
                if(j%2!=0) a[i][j]=1;
                else a[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}


int main(){
    f();
    
    return 0;
}