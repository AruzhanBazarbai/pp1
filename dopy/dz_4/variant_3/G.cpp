//Problem G. 79024 Subarray
/*
Given an array. Find a sequence of 3 numbers for which the sum of this sequence will be less than the
sum of others sequences. Print the sum of this sequence.
Input
First line contains n - size of an array(3<=n<=100). Then given elements of an array.
Output
Print solution for the problem.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0, mini=1e9;
    for(int i=0;i<n;i++){
        if(i<n-2){
            sum+=a[i];
            sum+=a[i+1];
            sum+=a[i+2];
            if(mini>sum) mini=sum;
            sum=0;
        }
    }
    cout << mini;
    
    return 0;
}