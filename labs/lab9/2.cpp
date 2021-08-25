#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
int main(){
    string n;
    cin >> n;
    stack<char> s;
   
    for(int i=0;i<n.size();i++){
        if(n[i]=='0') s.push('0');
        else if(n[i]=='1' && s.empty()) s.push('1');
        else if(n[i]=='1' && s.top()=='0'){ 
        s.push('1');
        }
        else if(n[i]=='1' && s.top()!='0') s.pop();
       
    }
    string res="";
    while(!s.empty()){
        res+= s.top();
        s.pop();
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout << res[i];
    }
    return 0;

}