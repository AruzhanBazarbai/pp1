//Aida and binary numbers
/*
Aida loves binary numbers and she loves to play with them. Aida in queue order puts zeros and ones in
a row. Aida like Aidar hates ones, but instead of removing, she wants to replace ones to zero. If two ones
are located beside then she replaces to 1 zero.
Input
Given a row of "0" or "1" digits.
Output
Your task is to find and print the final row.

*/
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> q;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            q.push(s[i]);
        }else if(s[i]=='1'){
            if(q.top()=='1'){
                q.pop();
                q.push('0');
            }else{
                q.push(s[i]);
            }

        }
    }
    string res="";
    while(!q.empty()){
        res+= q.top();
        q.pop();
    }
    reverse(res.begin(),res.end());
    cout << res;
    return 0;
}