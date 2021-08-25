/*
Almat does not love digits. Therefore, he always divides digits to two and takes one part for himself. For
example, yesterday he noticed a number 865 in the street. At first, he took the half of first digit (8/2 =
4), then second digit’s part (6/2 = 3), then third digit’s part(5/2 = 2).
*/
#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits(int n,int sum ){
    
    if(n==0) return sum;
    return sumOfDigits(n/10,sum+= n%10/2 );
}

int main(){

    int n;
    cin >> n;
    cout << sumOfDigits(n,0);
    
    return 0;
}