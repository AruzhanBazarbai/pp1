/*
In this problem, you are given 8-bit number x. Find its rightmost bit that is 1 in its binary representation.
For example binary representation of the number 12 is 0001100. The rightmost bit that is 1 has the
number 2, considering that we numerate bits from zero, from right to left.
вывести позицию справа 1 числа в 8-битном представлении
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s="";
    while(n>0){
        s+=char(n%2+48);
        n=n/2;
    }
    reverse(s.begin(),s.end());
    for(int i=s.size()-1;i<8;i++){
        s=char(48)+s;
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cout << i;
            return 0;
        }
    }
    
    return 0;
}