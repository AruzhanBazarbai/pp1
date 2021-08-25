//One day Ali decided to go to a cafe and order drinks and food there. He has d dollars and c cents. He
//ordered something with a cost of p cents, he ordered it n times. How much money Ali will have left, or
//what debt he will have
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int d,c,p,n;
    int a,b;
    cin >> d >> c >> p >> n;
    a=d*100+c;
    b=p*n;
    cout << (a-b)/100 << " " << (a-b)%100;
    return 0;

}