/*
You are given n, (1 ≤ n ≤ 100) positive integers, each integer v[i], (1 ≤ v[i] ≤ 1000). Then one integer
number k, (1 ≤ k ≤ 200). Your task is to show a count of prime numbers in a sequence that are greater
than k. Store n integers in a vector. You should create function isP rime to check for the prime.
Input:
The first line of input contains the number n - the number of integers. The second line contains a sequence
of integers. The third line contains integers k.
Output:
Output single number — count result
*/

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int x){
    if(x==1) return false;
    bool res=true;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            res=false;
            break;
        }
    }
    return res;

}

void f(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int k;
    cin >> k;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(isPrime(v[i]) && k<=v[i]){
            cnt++;
        }
    }
    cout << cnt;

}


int main(){
    f();
    return 0;
}
