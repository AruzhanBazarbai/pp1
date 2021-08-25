//compression
/*
Ayan has recently discovered an operation called compression that is used with strings. This operation
takes a string and leaves only the first occurrences of letters that are present in the string and deletes all
the other later occurrences.
For example, if we apply compression on a string «ACABACA», after the operation we will get «ACB»
because we delete all the last three «A»-s and the second «C» by leaving only unique letters.
Given a string s, Ayan asks you to find the result of applying compression on s.
*/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
char t[1000];

int main(){
    string s;
    cin >> s;
    t[0]=s[0];
    int j=1;
    for(int i=0;i<s.size();i++){
        bool z=true;
       for(int k=0;k<j;k++){
           if(s[i]==t[k]){
               z=false;
               break;
           }
       }
       if(z){
           t[j]=s[i];
           j++;
       }
        
    }
    for(int i=0;i<=j;i++){
        cout << t[i];
    }
    return 0;
}