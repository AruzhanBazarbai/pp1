/*
A palindrome is a word which reads the same backward as forward, such as madam or racecar. The string
called as a good palindrome if its size is even and the string is a palindrome.
For example, "aba"is palindrome, but not good palindrome, "abab"is not Palindrome, and "abaaba"is
good palindrome.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(s==s1){
        if(s.size()%2==0) cout << "GoodPalindrome";
        else cout << "NotGoodPalindrome";
    }else{
        cout << "NotPalindrome";
    }

    return 0;
}