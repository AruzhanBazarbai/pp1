//You’re given string s which is not palindrome. You need to answer, is that possible, if we add one letter
//to s such that s will become palindrome.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,s1;
    cin >> s;
    s1=s;
       reverse(s1.begin(),s1.end());
        if(s==s1){
            cout << "YES";
        }
        else{
            if(s.size()<=2){
                cout << "YES";
            

            }
            else if(s.size()>2){
                for(int i=0;i<s.size()/2;i++){
                    if(s[i+1]!=s[s.size()-1-i]){
                        cout << "NO";
                        break;
                    }else{
                        cout << "YES";
                    }
                }
            }
        }
    
    
       
       
  
   

     
    
    return 0;
   
}