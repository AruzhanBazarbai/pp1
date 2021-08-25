//You have array you should find xor of all elements in this array
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int x;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    x=a[0];
    for(int i=1;i<n;i++){
        x=x^a[i];
    }

    cout << x;

    return 0;
}