/*
I hope everyone knows how to find GCD. Now let’s find the LCM(Least Common Multiple). good luck
everyone! =)

by formula: lcm(a,b)=(a*b)/gcd(a,b);
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int a1, b1;
    a1=a;
    b1=b;

    int gcd, lcm, r1, r2;
    r1 = a % b;

    while(r1 > 0){
        r2 = r1;
        r1 = a % b;
        a = b;
        b = r1;
    }
   gcd = r2;
   
   lcm = (a1 * b1) / gcd; 

   cout << lcm;
    
    
    return 0;
}