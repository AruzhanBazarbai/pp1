//You’re given string s, you need to change all small letters to capital letters.
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
   
    for(int i=0; i<s.size();i++){
        int x=int(s[i]);
        if(x>=97 && x<=122){ 
           s[i]=char(x-32);
        }
        cout << s[i];
    }
   

    return 0;
} 