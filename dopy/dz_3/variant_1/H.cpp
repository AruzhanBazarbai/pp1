//You need to find gcd and lcm via recursion and output the result as cout«gcd (a, b)+lcm (a,b).
#include <iostream>
#include <cmath>
using namespace std;
int f(int a,int b,int r1,int r2){
    if(r1==0) return r2;
    return f(b,r1,a%b,r1);
}
int main(){
    int a,b;
    cin >> a >> b;
    int a1=a,b1=b,gcd,r1,r2;
    r1=a%b;
    gcd=f(a,b,r1,r2);
    int lcm=(a1*b1)/gcd;
    cout << lcm+gcd;
    return 0;
}