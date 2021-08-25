//Given an array consisting of integers.
// Write a program, which outputs all odd elements of array. 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i] ;
    }
    for(int i=0; i<n; ++i){
        if(a[i]%2==1) 
        cout << a[i] << " " ;
    }

    return 0;
}