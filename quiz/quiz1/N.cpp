//Adilkhan, Kymbat and Ali wanted to calculate how much money goes to pay for telephone services.
//Telephone network services are paid according to the following rule: for calls up to A minutes per month -
//B rubles per minute, and calls in excess of the established rate are paid at the rate of C rubles per minute.
//It is required to write a program that calculates the bill for using the telephone for conversations lasting
//T minutes per month
#include <iostream>
using namespace std;
int main(){
    int A,B,C,T, M;
    cin >> A >> B >> C >> M;
    T=A*B+(M-A)*C;
    cout <<  T;


}