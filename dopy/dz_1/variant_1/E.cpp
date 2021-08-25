/*
Azamat and Dauren put their money in the bank for a deposit. Each year, Azamat money grows three
times, and Dauren twice.
Input
In a single line there are two integers a and b (1 =< a =< b =< 10) - the money of Azamat and Dauren,
respectively.
Output
Output one integer - after how many years will Azamat have more money than Dauren
*/

#include <iostream>
using namespace std;
int main(){
    int a,d;
    cin >> a >> d;
    
    int cnt=0;

    while(a<=d){
        a=a*3;
        d=d*2;
        cnt++;
    }

    cout << cnt;

    return 0;
}