//Given an array consisting of integers.
// Write a program, which finds sum of all elements
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    long long sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        sum+=a[i];

    }
    cout << sum << "\n";

    return 0;
}