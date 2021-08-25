/*
Imagine you have A dimes(10 cents), B quarters(25 cents), C nickels(5 cents) and D dollars(100 cents)
What is a total amount of money you have?
Input
In the first line, you are given 4 numbers A, B, C, and D (0 ≤ A, B, C, D ≤ 100).
Output
Print out a number of dollars and cents you have
*/
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    a=a*10;
    b=b*25;
    c=c*5;
    d=d*100;

    int sum=a+b+c+d;

    cout << sum/100 << " " << sum%100;
    
    return 0;
}