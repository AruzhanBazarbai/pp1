/*
Required to determine whether the bishop, standing on the cell with the specified coordinates (row number
and column number), beats the figure standing on the other specified cell.
Input
Input contains four number, each written in separate line:
- coordinates of rook ( two numbers )
- coordinates of other figure ( two numbers ).
Numbers are integer and in range (1 ≤ x ≤ 8)
Output
Output Y ES if bishop beats figure in 1 turn and NO - otherwise.
*/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool f(int x1,int y1,int x2,int y2){
    bool k=false;
    if(abs(x1-y1)==abs(x2-y2)){
        return true;
    }
    else if(x1+y1==x2+y2){
       return true;
    }
    else return false;
}

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(f(x1,y1,x2,y2)) cout << "Yes";
    else cout << "No";

    return 0;
}