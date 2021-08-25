/*
Today is Zhomart’s birthday, so he invited N −1 friends to his birthday. And when they were going to eat
the birthday cake, they had one problem. There are N people counting Zhomart himself, and you have
to slice the cake to N equal pieces. Count the minimum number of slices you need to make.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1) cout << "0";
    else if(n%2==0) cout << n/2;
    else cout << n;

    
  
    return 0;
}