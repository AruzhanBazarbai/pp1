/*
Since school, Assyl loves geometry and in his first programming lesson he decided to draw all the geometric
shapes in the terminal. And due to the fact that he is a fan of the "Gravity Falls"cartoon, where the main
villain, Bill Cipher, was in the shape of a triangle, Asyl decided to draw a triangle first. Help Asyl solve
this problem.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==j) cout << "*";
            else cout << "-";
        }
        cout << endl;
    }
    
  
    return 0;
}