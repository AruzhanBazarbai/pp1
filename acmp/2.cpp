//Сумма
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long c;
    if(n>0){
        c=(n*(n+1))/2;
    }else if(n<=0){
        c=-1*(abs(n)*(abs(n)+1))/2+1;
    }
    cout << c;
    return 0;
}