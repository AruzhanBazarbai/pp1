//Problem G. 79020 Sum of substring
/*
Given an array. Find a sequence of 2 numbers for which the sum of this sequence will be less than the
sum of others sequences. Print the sum of this sequence.
Input
First line contains n - size of an array(2<=n<=100). Then given elements of an array.
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
    int mini=1e9;

    for(int i=0;i<n;i++){
        if(i<n-1){
            int c=a[i]+a[i+1];
            if(mini>c) mini=c;
        }
    }

    cout << mini;

    return 0;
}