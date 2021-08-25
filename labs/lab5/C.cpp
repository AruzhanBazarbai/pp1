//You’re given to strings, s and t,you need to check is the string t substring of string s
#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    int x=s.find(t);
    if(x!=string::npos){
        cout << "YES";
    }else {
        cout << "NO";
    }
    
    return 0;
} 