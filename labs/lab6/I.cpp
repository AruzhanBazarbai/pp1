//Given a string s. You need to write a function that takes the string and turn lowercase letters on even
//positions to capital letters.

#include <iostream>

using namespace std;

void str(string s){
    for(int i=0; i<s.length();i++){
        if(i%2==0){
            cout<<char(toupper(s[i]));
        }else{
            cout << s[i];
        }
    }
}
    
int main(){
    string s;
    cin >> s;
    str(s);
    return 0;
   
       
}
