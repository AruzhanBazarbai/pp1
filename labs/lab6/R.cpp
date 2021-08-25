//You are given one letter of English alphabet, write a function which will convert only lowercase letters to
//uppercase.
#include <iostream>

using namespace std;

void up(){
    char s;
    cin >> s;
    if(s>=97 && s<=122){
        cout << char(toupper(s)) ;
    }else{
        cout << s;
    }

    
    
}
    
int main(){
    
    up();
    return 0;
   
       
}