/*
k-bonacci sequence given as follows ai = ai−2 + k · ai−1, where a1 = 0 and a2 = 1. You’re given numbers
k and m. Print the last digit of m-th term of k-bonacci sequence. SOLVE ONLY USING RECURSION!
Input
The only line of the input contains integer numbers k and m (1 ≤ k ≤ 106
, 1 ≤ m ≤ 32).
Output
Print the last digit of m-th term k-bonacci sequence.
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 

int func_kb(int k, int m,long long int a){
    if(m==1) return 0;
    if(m==2) return 1;
    a=func_kb(k,m-2,a)+func_kb(k,m-1,a)*k;
    return a%10;
}

int main(){

    int k, m;
    cin >> k >> m;

    long long int a;
    cout << func_kb(k, m, a);

    return 0;
}