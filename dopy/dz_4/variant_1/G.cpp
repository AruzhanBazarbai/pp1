//Problem G. 79009 Train
/*
Given an array where differences between i’s value and (i + 1)’s value is the distance between stations i
and i + 1. Find how much time does it take to reach the final station if train move with speed v.
Input
First line contains n - size of an array(2<=n<=100). Then given elements of an array. Third line contains
v - speed of train(1<=v<=1000).
Output
Output contains double(print only 2 numbers after floating point).
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
    double s=0;
    for(int i=0;i<n-1;i++){
        int c=abs(a[i]-a[i+1]);
        s+=c;
    }
    double v;
    cin >> v;
    double t=s/v;
    printf("%.2f",t);

    return 0;
}