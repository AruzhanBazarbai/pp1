//Almat has an array A of n integers. Almat wants to find the number of pairs of indices (i, j) such that i
//< j <= n, where (A[i] xor A[j]) is also in initially given array.

#include <iostream>
#include <map>
using namespace std;
int n;
int a[1111];
map<int,int> q;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        q[a[i]]=1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           if(q[a[i]^a[j]]){
               sum++;
           }
        }
    }
    cout << sum;
    return 0;

}