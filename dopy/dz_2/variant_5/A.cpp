/*
In this problem, you are given two 8-bit integers x and y. Find the number of corresponding bits in their
binary representation that are different.
For example, for x = 3 and y = 6, binary representations are 00000011 and 00000110 respectively. All
of the bits, except zeroth and second ones are same. So, the answer is 2.
Note. In this problem, we numerate bits from zero, from right to left
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    string s1="", s2="";
    while(x>0){
        s1+=char(x%2+48);
        x=x/2;
    }
    while(y>0){
        s2+=char(y%2+48);
        y=y/2;
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=s1.size()-1;i<8;i++){
        s1=char(48)+s1;
    }
    for(int i=s2.size()-1;i<8;i++){
        s2=char(48)+s2;
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int cnt=0;
    for(int i=0;i<8;i++){
        if(s1[i]!=s2[i]){
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}