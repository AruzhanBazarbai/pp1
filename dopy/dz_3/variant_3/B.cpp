//Max and min digits of a number
//Given a number N. The task is to find the largest and the smallest digit of the number.

#include <iostream>
#include <algorithm>
using namespace std;

int a[10000];

int main(){
    int n;
    cin >> n;
    int i=0,cnt=0;
    
    while(n>0){
        int x=n%10;
        a[i]=x;
        i++;
        cnt++;
        n=n/10;
    }

    sort(a,a+cnt);

    cout << a[cnt-1] << " " << a[0];

    
    return 0;
}