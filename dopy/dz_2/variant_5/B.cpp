/*
Let’s define binarization as an operation on an array of integers. Binarization takes all of the greatest
elements of an array and replaces them with 1-s, and all the other elements with 0-s.
In this task, you are challenged to make binarization on a given array of integers.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(maxi<a[i]) maxi=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxi) a[i]=1;
        else a[i]=0;
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}