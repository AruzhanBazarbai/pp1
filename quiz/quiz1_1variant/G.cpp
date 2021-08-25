/*
Satzhan loves to count, and one day he saw snail climbing to the tree. Tree’s height is N meters, and snail
climbs A meters at daytime, and falls B meters at nighttime. Satzhan was curious about could snail climb
to the top of the tree, and if could, in how many days.
*/

#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if(n<=a){
        cout<< 1; 
    }else if(a<=b){
        cout<<"NO";
    }else if (a!=b and a!=n){
    cout<< (1 + (n-  b - 1) / (a - b));
    }
return 0;
}