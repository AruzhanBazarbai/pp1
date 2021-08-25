/*
Tony Stark on a new mission again! He has assembled a new robot who is much stronger than the previous
ones.
Today Tony, after coming from his vacation, heard that Captain America is retiring. He felt very
disappointed and decided to persuade Captain America to return back.
That’s why he asked his new robot to find Captain America’s email address. It is known that a valid
email address must appear in the following format: AAA@BBB.CCC, where AAA, BBB, and CCC are
some non-empty strings containing only lowercase English letters.
Given the email address that was provided by the new robot, your task is to validate it.
Note that any deviation violates the given format.
Input
The first line of input contains a single string s — an email address that was provided by the robot
(5 ≤ |s| ≤ 30).
Output
If the given email address is valid, print «Yes».
Otherwise, print «No».
*/
#include <iostream>
#include <string>
using namespace std;

bool f(string s){
    int k;
    bool a=false, b=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='@'){
            k=i;
            if(s[i-1]>='a' && s[i-1]<='z' && s[i+1]>='a' && s[i+1]<='z'){
                a=true;
            }
        }
        if(s[i]=='.' && i>k){
            if(s[i-1]>='a' && s[i-1]<='z' && s[i+1]>='a' && s[i+1]<='z'){
                b=true;
            }
        }
    }
    if(a && b) return true;
    else return false;
}

int main(){
    string s;
    cin >> s;
    if(f(s)) cout << "Yes";
    else cout << "No";
    
    return 0;
}