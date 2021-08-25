//Given an array consisting of integers.
// Write a program, which outputs count of positive numbers in array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int count=0;
    for(int i=0; i<n; ++i){
        cin >> a[i] ;
    }
    for(int i=0; i<n; ++i){
        if(a[i]>0)
        count++;
       
        

    }
     cout << count << "\n";
    


    return 0;
}