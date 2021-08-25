//You are given an array of n elements. Write a function for printing given array in reverse order.
#include <iostream>

using namespace std;

void arr(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout <<  a[i] << " ";
    }
}
    
int main(){
    arr();
    return 0;
   
       
}
