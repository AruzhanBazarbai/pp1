//Given an array consisting of integers. Write a program, which finds position of maximum element of array.
//If maximums is two or more you should output first position.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int maxi=-1e9, maxindex=0;
    for(int i=0;i<n; i++){
        if(maxi<a[i]){
            maxi=a[i];
            maxindex=i;
        }

    }
    cout << maxindex + 1 << "\n";
    return 0;
}