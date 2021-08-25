//You’re given string s, you need to shift all characters in s to the next character in alphabetical order. If
//our character is ’z’ change it for ’a’.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i]==122){
            str[i]=97;
        }else{
            str[i]=str[i]+1;
        }
        cout << str[i];
    }

    
    
    return 0;
}
   