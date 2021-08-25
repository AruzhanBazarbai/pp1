//Problem F. 78709 Divisibility
/*
Given an array. Find how many elements of array is divisible by 2, 3, 4.
Input
In first line you have n - size of the array.(1<=n<=20) Second line contains elements of the array.
Output
Print solution for the problem.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        int cnt=0;
        if(a[i]%2==0) cnt++;
        if(a[i]%3==0) cnt++;
        if(a[i]%4==0) cnt++;
        cout << cnt << " ";
    }
    return 0;
}