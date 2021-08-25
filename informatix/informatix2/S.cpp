#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a, b, c;
    cin >> a >> b >> c;
    int n = 0;
    int cnt = 0;
    while(n <= a){
        n += b;
        n -= c;
        cnt++;

    }
    cout << cnt;

    return 0;
   
}
