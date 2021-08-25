#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,maxi=-1e9,cnt=0;;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        if(i==0){
            cnt=a[i]+a[n-1]+a[i+1];
            if(maxi<cnt){
                maxi=cnt;
            }
        }else if(i==n-1){
            cnt=a[i]+a[0]+a[i-1];
            if(maxi<cnt) maxi=cnt;
        }else{
            cnt=a[i]+a[i-1]+a[i+1];
            if(maxi<cnt) maxi=cnt;
        }
    }


    cout << maxi;

    return 0;
}