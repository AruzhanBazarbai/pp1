//Problem H. String shift
/*
We have a string S consisting of uppercase English letters. Additionally, an integer N will be given.
Shift each character of S by N in alphabetical order (see below), and print the resulting string.
We assume that A follows Z. For example, shifting A by 2 results in C (A -> B -> C), and shifting X by
3 results in B (X -> Z -> A -> B).
(0 ≤ N ≤ 26), (1 ≤ |S| ≤ 10000).
*/
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    
    for(int i=0;i<s.size();i++){
        int t=int(s[i])-64+n;
        if(t%26==0) s[i]='Z';
        else{
            int b=t%26;
            s[i]=char(b+64);
        }

    }

    for(int i=0;i<s.size();i++){
        cout << s[i];
    }
        
    return 0;
}