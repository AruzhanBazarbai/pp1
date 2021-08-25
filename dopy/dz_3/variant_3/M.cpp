//Again Serik panini seller
/*
You want to buy some panini and asu with lemon from Serik for exactly N tenge. Panini cost 7 tenge, asu
with lemon cost 4 tenge.
Input
You are given single integer N. 1 <= N <= 1000.
Output
Print Yes, if you can buy some panini and asu for exactly N tenge.

You can buy zero or more times panini and asu with lemon.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%7==0 || n%4==0 || n%11==0) cout << "Yes";
    else cout << "No";

    return 0;
}