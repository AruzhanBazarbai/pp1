//Налоги
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x;
    double cnt=0,maxi=-1e9;
    cin >> n;
    double a[n],b[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cin >> b[i];
    }


    for(int i=0;i<n;i++){
        cnt=(a[i]*b[i])/100;
        if(maxi<cnt){
            maxi=cnt;
            x=i+1;
        }
    }


    cout << x;

    return 0;
}