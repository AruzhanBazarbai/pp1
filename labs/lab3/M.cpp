//You are given an array, find the sum of all elements. But you don’t know size of the array.
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    while(cin>>n){
        sum+=n;
    }
    cout << sum;
    return 0;
}