//You’re given string s, which contains only small letters. You need to output character c from s such that,
//position of the c in alphabet is the most further.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    
        cout << str[str.size()-1];
    
    
    return 0;
   
}