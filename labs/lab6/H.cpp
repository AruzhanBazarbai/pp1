//Given a number n. Write a function for checking if this number is valid. Valid number is the number that
//consists of even digits only
#include <iostream>

using namespace std;

void str(){
    string s;
    cin >> s;
    bool k=true;
    for(int i=0;i<s.size();++i){
        if(s[i]%2==1){
            k=false;
           

        }
    }
    if(k) cout <<  "Valid";
    else cout << "Not valid";
}
    
int main(){
    
    str();
    return 0;
   
       
}