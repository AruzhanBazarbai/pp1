//You need to write a program that determines whether a four-digit natural number N is a palindrome.
//Palindrome is a number that reads equally from left to right and from right to left.

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int a[10000];
int main(){
    int n;
    cin >> n;
    int i=0,cnt=0;
    while(n>0){
        a[i]=n%10;
        n=n/10;
        i++;
        cnt++;
    }
    int z=0;
    bool k=true;
    for(int i=cnt-1;i>=0;i--){
        if(a[i]!=a[z]){
            k=false;
            break;
        }
        z++;
        
    }
    if(k) cout << "YES";
    else cout << "NO";
    
    return 0;
}