/*
Aidar in queue order puts zeros and ones in a row. He hates ones, and if two ones are located beside then
he removes them. You have the order in which Aidar is going to put numbers.Your task is to find the final
row
Input
First line contains one string which consists of ones and zeros.
Output
Print the final string after Aidar’s manipulations.
*/
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    stack<char> q;
    string s;
    cin >> s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0') q.push('0');
        if(s[i]=='1' && q.empty()) q.push('1');
        else if(s[i]=='1' && q.top()=='0') q.push('1');
        else if(s[i]=='1' && q.top()=='1') q.pop();
    }

    string res="";
    while(!q.empty()){
        res+=q.top();
        q.pop();
    }
    reverse(res.begin(),res.end());
    cout << res;
    return 0;
}