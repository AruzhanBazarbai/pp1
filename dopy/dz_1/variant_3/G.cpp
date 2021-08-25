//Help bear to find sum of elements in the array which divides into 3 or 7 or 5.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%7==0 || a[i]%3==0 || a[i]%5==0) sum+=a[i];
    }
    cout << sum;

    return 0;
}