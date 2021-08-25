/*
A group of junior programmers are attending an advanced programming camp, where they learn very
difficult algorithms and programming techniques! Near the center in which the camp is held, is a
professional bakery which makes tasty pastries and pizza. It is called ’Bonabity’... or ’Ponapety’... or
’Ponabity’... Actually no one knows how to spell this name in English, even the bakery owner doesn’t,
and the legends say that Arabs always confuse between ’b’ and ’p’, and also between ’i’ and ’e’, so ’b’ for
them is just the same as ’p’, and ’i’ for them is just the same as ’e’, they also don’t care about letters’
cases (uppercase and lowercase for a certain letter are similar). For example, the words ’Ponabity’ and
’bonabety’ are considered the same. You are given two words including only upper case and lower case
English letters, and you have to determine whether the two words are similar in Arabic.
Input
The input consists of several test cases. The first line of the input contains a single integer T, the number
of the test cases. Each of the following T lines represents a test case and contains two space-separated
strings (each one consists of only upper case and lower case English letters and its length will not exceed
100 characters).
Output
For each test case print a single line: ’Yes’ if the words are similar in Arabic and ’No’ otherwise.
*/
#include <iostream>  
#include <cmath>
#include <vector>
#include <set>
using namespace std;

string arab(string s, string t){

    if(s.size() != t.size()) {
        return "No";
    }

    for(int j = 0; j < s.size(); j++){
        s[j] = tolower(s[j]);
        t[j] = tolower(t[j]);
    }

    for(int j = 0; j < s.size(); j++){
        if(s[j] != t[j]){
            if(!(s[j] == 'b' && t[j] == 'p' || s[j] == 'p' &&  t[j] == 'b')  &&  !(s[j] == 'i' && t[j] == 'e' || s[j] == 'e' && t[j] == 'i')){
            return "No";

            }
        }
    }
    return "Yes";
}
int main(){

    int a;
    cin >> a;

    string s[a], t[a];

    for(int j = 0; j < a; j++){
        cin >> s[j] >> t[j];

        cout << arab(s[j] ,t[j]) << endl;
    }
    return 0;

}

