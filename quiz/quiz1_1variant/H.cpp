/*
Given a number, you need to operate on this number under the following conditions.
*If the sum of all even digits is greater than the sum of odd digits, print the sum of even digits
*If the sum of all odd digits is greater than the sum of even digits, print the sum of odd digits
*If equal then print the sum of all digits
For Example: our number 18467. Sum of even digits equals 18(8+4+6). Sum of odd digits equals 8(1 +
7). So we should print 18.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    int sumE=0, sumO=0;
    while(n>0){
        a=n%10;
        if(a%2==0) sumE+=a;
        else sumO+=a;
        n=n/10;

    }
    if(sumE>sumO) cout << sumE;
    else if(sumE==sumO) cout << sumE+sumO;
    else cout << sumO;
    return 0;
}