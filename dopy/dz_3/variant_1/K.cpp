/*
Adil really likes climbing over the fences, but sometimes fences are too high. He does practice 3 times a
day. To climb over the fence, the average score at least of one of the training days must be more or equal
than a height of the fence. You have to determine, can he climb over the given fence or not.
*/
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    int x;
    int sum[n];
    for(int i=0;i<n;i++){
        sum[i]=0;
        for(int j=0;j<3;j++){
            cin >> x;
            sum[i]+=x;
        }
    }
   
 
    bool z=false;
    for(int i=0;i<n;i++){
        int a=sum[i];
        if(a/3 >= k){
            z=true;
            break;
        }
    }
    if(z) cout << "YES";
    else cout << "NO";
  
    return 0;
}