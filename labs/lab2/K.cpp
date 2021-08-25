//Find all exact squares of natural numbers that do not exceed a given number N
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, n;
    cin >> n;
    cout << 1 << "\n";
    for(int i=2; i<=sqrt(n); i++){
        cout << i*i << "\n";
    }
    return 0;
}
