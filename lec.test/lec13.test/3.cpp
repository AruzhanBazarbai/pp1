#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int a[]={4,8,9,10,25,1,85};
    int n=sizeof(a)/sizeof(int);

    sort(a,a+n,greater<int>());//по убыванию
    sort(a,a+n,less<int>());//по возрастающий (обычно это по умолчанию)

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
        
    return 0;
}