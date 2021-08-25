//Check the given number is 2-th degree.
#include <iostream>
#include <cmath>
using namespace std;

bool degreeOfTwo(int a, int n, int x){
    if(n>x) return false;
    if(n==x) return true;
    n*=a;
    return degreeOfTwo(a,n,x);
}

int main(){
    int x;
    cin >> x;
    int a,n;
    a=2;
    n=1;

    if(degreeOfTwo(a,n,x)) cout << "Yes";
    else cout << "No";

    return 0;
}