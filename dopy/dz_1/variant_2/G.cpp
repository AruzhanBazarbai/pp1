//вывести разницу между макс и мини элементом массива
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
       cin >> a[i];
    }
    int maxi=-1e9,mini=1e9;

    for(int i=0;i<n;i++){
        if(maxi<a[i]) maxi=a[i];
        if(mini>a[i])  mini=a[i];
    }
    cout << maxi-mini;

    return 0;
}