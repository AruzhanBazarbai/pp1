// New Rules
/*
From course of math we know that the number is called prime if and only if number is greater that 1 and
divisible by 1 and itself. But one of the students tried to apply this rule for negatives and zero. He thinks,
if positive of number is prime, number is prime too. Zero is not prime. You task is to calculate all primes
by new rules.
Input
In the first row given single number N amount of numbers. Second line contains sequence of integers.
Output
Find how many primes are in sequence.
*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool f(int a){
    if(a!=0){
        int c=abs(a);
        for(int i=2;i<=sqrt(c);i++){
            if(a%i==0){
               return false;
            }
        }
    }
    if(a==1 || a==-1) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    for(int j=0;j<n;j++){
        int x;
        cin >> x;
        if(x!=0){
          a[j]=x;
          cnt++;
        }
        
    }
    int res=count_if(a,a+cnt,f);
    cout << res;
    
    return 0;
}
