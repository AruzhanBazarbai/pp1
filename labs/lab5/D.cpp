//You’re given string s, you need to print, is this string palindrome or not.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,s1;
    cin >> s;
    s1=s;
    reverse(s1.begin(),s1.end());
    if(s1==s){
        cout << "YES";
    }else{
        cout << "NO";
    }

    
     
    return 0;
} 