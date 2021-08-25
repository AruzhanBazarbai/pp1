/*
There were n problems in second quiz. Teachers wanted to define who is a cheater. If student solves a two
or more exercise in k minutes it is a obvious that he is a cheater.
Input:
You are given natural numbers n and k. Second line consists from n numbers. i-th element is a time when
a student solved i-th problem. (2 ≤ n ≤ 100, 1 ≤ k ≤ 10).
Output:
Print "cheater"if a student is a cheater, "no"otherwise.
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool find(int * a, int n,int k){
    if(n<=1) return false;
    if((a[n-1]-a[n-2])<=k) return true;
    return find(a,n-1,k);
}

int main(){

    int n,k;
    cin >> n >> k;
    int a[n];

    for(int i=0;i<n;i++){
         cin >> a[i];
    }

    sort(a,a+n);

    if(find(a,n,k)) cout << "cheater";
    else cout << "no";
    
    return 0;
}