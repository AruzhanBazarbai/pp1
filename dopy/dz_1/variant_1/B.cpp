//посчитать число четных чисел в массиве

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    int cntE=0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2==0) cntE++;
    }
     
    cout << cntE;
    

    return 0;
}