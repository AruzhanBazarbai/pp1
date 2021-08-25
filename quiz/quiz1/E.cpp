//One day Ioann decided to go to the store and buy something. He can buy 1,2 or 3 goods. Ioann received
//a check with the sum n. Each digit in number n represents the price of the each item. How much should
//Ioann pay?
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a, b, c, e;
    a=n/100;
    b=(n%100-n%10)/10;
    c=n%10;
    cout << a+b+c << "\n";
    return 0;
    }
