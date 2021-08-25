//perfect square
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    double c=sqrt(n);
    if(c*c==n) cout << "Yes";
    else cout << "No";
    
    
    return 0;
}