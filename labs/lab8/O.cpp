/*
Input:
Single line of input contains one string — s which consists of upper and lower case letter.
Output:
In first line output single integer — the number of unique letters from given string
Second line contains lower case each letter in the alphabet separated by space
*/
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    map<char,int> m;
    string s;
    cin >> s;
    char t;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            t=s[i]+32;
            m[t]++;

        }else{
            t=s[i];
            m[t]++;
            
        }
       
       

    }
    cout << m.size() << endl;
    map<char,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << (*it).first << " ";
    }

    
    
    return 0;
}
