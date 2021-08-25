//We all know the famous game of chess. Help Bakdaulet win the game with Daniil. Both have one figure
//left. Bagdaulet still has the Bishop figure. You need to determine if the Bagdaulet figure can eat the
//Daniils figure if we know the coordinates.
#include <iostream>
using namespace std;
int main(){
 
    int a, b, c, d;
 
    cin >> a >> b >> c >> d;
 
    if(abs(a - b) == abs(c - d)){
        cout << "Won";
    }
 
    else{
        cout << "Lose";}
 
    return 0;
}