//Given a string s. You have to write a function that removes all vowels from the string
#include <iostream>

using namespace std;
    
int main(){
    string s;
    getline (cin, s);
    for(int i=0;i<s.size();i++){
        if(s[i]!='A' && s[i]!='a' && s[i]!='E' && s[i]!='e' && s[i]!='I' && s[i]!='i' && s[i]!='O' && s[i]!='o' && s[i]!='U' && s[i]!='u'){
            cout << s[i];
        }
    }
    return 0;
       
}