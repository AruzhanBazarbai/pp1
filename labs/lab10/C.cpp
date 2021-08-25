// Squack
/*
Bagdat does not like two-digit squares in a sequence. She would like to erase all of them. Help Bagdat to
do it.
Input
In the first line you will be given integer n.
Output
Print the reversed number n after required operations. If sequence is empty, just print "Stack is empty".
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;

    for(int i=0;i<s.size();i++){
        if(st.empty()) st.push(s[i]);
        else if(!st.empty()){
            int a=(st.top()-'0')*10+(s[i]-'0');
            if(int(sqrt(a))*int(sqrt(a))==a){
                st.pop();
            }else{
                st.push(s[i]);
            }

        }
    }
    if(st.empty()) cout << "Stack is empty";
    else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
    
    return 0;
}
