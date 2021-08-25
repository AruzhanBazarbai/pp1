//Problem I. ZA WARUDO TOKI WO TOMARE
/*
DIO is fighting with JOJO. DIO wants to cast time stop, but for this DIO needs to find at least one
palindrome in given string s by permutations of letters, help DIO, is he can cast ZA WARUDO TOKI
WO TOMARE.
Input
You are given single string s.
Output
Print ZA WARUDO TOKI WO TOMARE, if given string could be palindrome permutation, otherwise
print JOJO
*/
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int a[26];

int main(){
    string s;
    cin >> s;
    
    for(int i=0;i<s.size();i++){
       a[s[i]-'a']++;
    } 

    int t=s.size();
    int cnt=0;
    if(t%2!=0){
        for(int i=0;i<26;i++){
            if(a[i]>0){
                if(a[i]%2!=0){
                    cnt+=1;
                }
            }
        }
            if(cnt==1) cout << "ZA WARUDO TOKI WO TOMARE";
            else cout << "JOJO";
            return 0;
    }else if(t%2==0){
        bool z=true;
        for(int i=0;i<26;i++){
            if(a[i]>0){
                if(a[i]%2!=0){
                    z=false;
                    break;
                }
            }
        }
        if(z) cout << "ZA WARUDO TOKI WO TOMARE";
        else cout << "JOJO";
        
    }
        
    return 0;
}