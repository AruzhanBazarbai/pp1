/*
You have array of elements you should output the sum of numbers with holes And you have numbers
between only 0 and 9
Numbers with holes: 0,4,6,8,9;
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    int cnt=0;

    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==0 || a[i]==4 || a[i]==6 || a[i]==8 || a[i]==9) cnt+=a[i];
    }
     
    cout << cnt;
    

    return 0;
}