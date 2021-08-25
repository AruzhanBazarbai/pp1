//Anagram
/*
You are given two strings. Your task is to find out are these two strings anagram. Two strings are
considered as anagram if for each letter the number of appearance in the first string is equal to the
number of appearance in the second string.
Input
The first line of the input contains a string S. The second line of the input contains a string T.
Output
Print ’YES’ if S and T is anagram otherwise print ’NO’
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout << "YES";
    else cout << "NO";


    return 0;
}