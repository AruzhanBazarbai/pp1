//Determine how many number of tens in the number N. Guaranteed that 0<n<1000.

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;

    int cnt;

    if(n>0 && n<100) cnt=n/10;
    else if(n>=100 && n<1000) cnt=n/10;

    cout << cnt;
    
    return 0;
}