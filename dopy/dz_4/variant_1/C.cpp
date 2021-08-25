//Problem C. 78495 Flip the coin
/*
Given coin whose eagle side looks up. Find the side of coin that looks up after n flips.
Input
Input contains integer 0 <= n <= 10ˆ9.
Output
Output EAGLE if after all flips coin’s eagle side looks up or TAILS otherwise.
*/
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%2==0) cout << "EAGLE";
    else cout << "TAILS";

    return 0;
}