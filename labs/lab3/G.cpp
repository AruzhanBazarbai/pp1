//Given an array consisting of integers.
// Write a program, which will change all maximal elements to minimal
//elements of the array. Look to sample to better understand the conditions.
#include <iostream>
using namespace std;
int main(){
    int n;
    int maxi=-1e9, mini=1e9, maxii;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<n; i++){
        if(maxi<a[i]){
            maxi=a[i];
            maxii=i;
        }
    }
       
        
    for(int i=0;i<n; i++){
         if(mini>a[i]){
            mini=a[i];
        }
    }
    a[maxii]=mini;
   
    for(int i=0; i<n; i++){
      
       cout << a[i]  << " ";
    }
    
   
    
    return 0;
}