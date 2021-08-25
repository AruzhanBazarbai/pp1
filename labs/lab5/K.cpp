//You’re given string s consisting of small letters, output amount of vowel letters. In english vowel letters
//are a, e, i, o, and u. (letter ’y’ is sometimes vowel, but in this problem we don’t take it for the answer)
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==97 or s[i]==101){
            cnt++;
        }else if(s[i]==105 or s[i]==111){
            cnt++;
        }
        else if(s[i]==117){
            cnt++;
        }
    }
    cout << cnt;
    
    
    
    return 0;
   
}