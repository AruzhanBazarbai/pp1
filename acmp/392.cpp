//Сдвиг перестановки
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int main (){
    int n,min=0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[min]>a[i]) min=i;
    }
    for(int i=0;i<n;i++){
        cout << a[(min+i)%n] << " ";
    }
    
    return 0;
}