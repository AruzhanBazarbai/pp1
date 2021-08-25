//Уравнение для 5 класса!
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    string s;
    cin >> s;
    int a,b,res;

    if(s[0]<'0' || s[0]>'9'){
        a=int(s[2])-48;
        b=int(s[4])-48;
        if(s[1]=='-') res=a+b;
        else if(s[1]=='+') res=b-a;
    }else if(s[2]<'0' || s[2]>'9'){
        a=int(s[0])-48;
        b=int(s[4])-48;
        if(s[1]=='-') res=a-b;
        else if(s[1]=='+') res=b-a;
    }else if(s[4]<'0' || s[4]>'9'){
        a=int(s[0])-48;
        b=int(s[2])-48;
        if(s[1]=='-') res=a-b;
        else if(s[1]=='+') res=a+b;
    }
    cout << res;

    return 0;
}