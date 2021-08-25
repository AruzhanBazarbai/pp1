/*
You are given a sequence of numbers. It is a too long sequence. It will stop when user enters 0. Print sum
of entered numbers.
*/
#include <iostream>
#include <cmath>
using namespace std;

int sumOfValues(int * a,int i, int n,int res){
    if(a[i]==0) return res;
    res+=a[i];
    return sumOfValues(a,i+1,n,res);
    
}

int a[100000];

int main(){

    int x;
    int i=0;
    
    while(cin >> x){
        a[i]=x;
        i++;
        if(x==0) break;
    }

    int n=i+1;

    cout << sumOfValues(a, 0,n,0);
    
    return 0;
}