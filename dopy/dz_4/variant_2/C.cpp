//Problem C. 79084 To Hex
/*
Given number. Print this number in hexadecimal.
Input
Contains integer n (0<=n<=1000).
Output
Print solution for the problem
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string res="";

    while(n>0){
        int c=n%2;
        res+=char(c+48);
        n=n/2;
    }
    if(res.size()>8){
       while(res.size()<12){
        res+='0';
       }
    }
    
    reverse(res.begin(),res.end());
  
    string temp="", s="";
    for(int i=0;i<res.size();i++){
        temp+=res[i];
        if((i+1)%4==0){
            if(temp=="0000") s+='0';
            else if(temp=="0001") s+='1';
            else if(temp=="0010") s+='2';
            else if(temp=="0011") s+='3';
            else if(temp=="0100") s+='4';
            else if(temp=="0101") s+='5';
            else if(temp=="0110") s+='6';
            else if(temp=="0111") s+='7';
            else if(temp=="1000") s+='8';
            else if(temp=="1001") s+='9';
            else if(temp=="1010") s+='A';
            else if(temp=="1011") s+='B';
            else if(temp=="1100") s+='C';
            else if(temp=="1101") s+='D';
            else if(temp=="1110") s+='E';
            else if(temp=="1111") s+='F';
            temp="";
        }
    }
    cout << s;
    return 0;
}