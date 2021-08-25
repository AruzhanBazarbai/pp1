/*
You are given a bracket sequence. Your task is to identify whether this bracket sequence is correct or
not. Note that a bracket sequence is correct if it is possible to get a correct mathematical expression by
adding "+s and "1s to it. For example, sequences "(())() "()"and "(()(()))"are correct, while ")( "(()"and
"(()))("are not.
Input
You have one string.
Output
Output "YES"if this bracket sequence is correct, otherwise print "NO".
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    stack<char> st;

    string s;
    cin >> s;
    bool k=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push('(');

        }else{
            if(st.size()>0){
                st.pop();
            }else{
                k=false;
                break;
            }
        }
    }

    if(k==false || !st.empty()) cout << "NO";
    else cout << "YES";
    return 0;
}