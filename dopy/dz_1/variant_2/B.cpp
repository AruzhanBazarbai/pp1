/*
Given an array consisting of integers. It is known that the numbers are ordered by nondecreasing (that
is, each next element is not less than the previous one). Write a program that determines the number of
different numbers in this array
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]-a[i-1]!=0) cout << a[i-1] << " ";
    }

    return 0;

}