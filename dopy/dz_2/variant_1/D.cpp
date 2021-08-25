/*
After the next lectures on philosophy, during the break, Alik decided to buy panini at KBTU in
Abylaykhan caffee. However, panini seller Seric, said that he can accept only 2 coins without exchange to
buy a panini with a cost k. Alik has n coins, help him find out if he can buy a panini with a cost of k.
In general you are given an array with n coins. Determine, is there at least one pair (i, j) in the array
that a[i]+a[j]=k and i!=j.
*/

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]!=a[j]){
                if(a[i]+a[j]==m){
                   cout << "YES";
                   return 0;
                }
            }
        }
       
    }
    cout << "NO";
    
    
    
    
    return 0;
}