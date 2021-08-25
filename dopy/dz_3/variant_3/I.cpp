//bear
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
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int cnt=0;
    while(n<=m){
        n*=3;
        m*=2;
        cnt++;
    }
    cout << cnt;
    return 0;
}