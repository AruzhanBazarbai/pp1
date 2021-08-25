/*
Write a program, that will ask you to enter positive numbers. The program will terminate when it meets
a negative number.
Input:
Input contains positive integer numbers.
Output:
Print out the percentage of even numbers and percentage of odd numbers. (Consider zero as even number)
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    int cntE=0,cntO=0,cnt=0;
    while(cin >> x){
        if(x<0) break;
        if(x%2==0) cntE++;
        else cntO++;
        cnt++;
    }
    double a=cnt/1.0000/100;
  
    cout << cntE/1.0000/a << "%" << " " << cntO/1.0000/a << "%";
    return 0;
}