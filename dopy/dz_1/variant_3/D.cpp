//арифметикалык прогрессия
#include <iostream>
using namespace std;
int main(){
    int a1,a2,n;
    cin >> a1 >> a2 >> n;
    int d=a2-a1;
    n=a1+(n-1)*d;
    cout << n;
    return 0;
}