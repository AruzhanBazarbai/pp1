//Problem E. 78668 Longest window
/*
Given an array where every number with even index i(indexes started from 1) represents the time when
lesson starts. And every next number with index i + 1 represents the time when the lesson ends. Find the
length of longest gap aka "window"between lessons.
Input
In first line you have n - size of the array.(2<=n<=20) Second line contains elements of the array. n -
even number.
Output
Print answer for the problem
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    vector<int> v;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=2;i<n;i+=2){
        int c=a[i]-a[i-1];
        v.push_back(c);
    }
    
    int maxi=0;

    for(int i=0;i<v.size();i++){
        if(maxi<v[i]) maxi=v[i];
    }

    cout << maxi;
    
    return 0;
}