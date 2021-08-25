//There is a farm with some number of rabbits are being held. Is it possible that sum of legs of all rabbits
//sum up to n? It is known that each rabbit has exactly 4 legs.

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%4==0) cout << "Yes";
    else cout << "No";

    return 0;
}