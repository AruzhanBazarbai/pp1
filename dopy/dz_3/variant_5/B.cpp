//.Interview
/*
You are given an array and a target number. Your task is to find out are there two elements in the array
such that the sum of this two elements equal to the target number.
*/
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool k=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(a[i]+a[j]==m){
                    k=true;
                    break;
                }
            }
        }
    }
    if(k) cout << "Yes";
    else cout << "No";
    
    return 0;
}