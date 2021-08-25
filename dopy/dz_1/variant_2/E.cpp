//Imagine a regular chess table. You are given two integers that are coordinates of some field of the chess
//table. Your task is to find out whether the color of the field is white or black.

#include <iostream>
using namespace std;
int a[8][8];
int main(){
   int x,y;
   cin >> x >> y;
   
   for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
            if((i%2!=0 && j%2==0)||(i%2==0 && j%2!=0)){
                a[i][j]=1;
            }
       }
   }

   if(a[x-1][y-1]==1) cout << "black";
   else cout << "white";


   return 0;
}