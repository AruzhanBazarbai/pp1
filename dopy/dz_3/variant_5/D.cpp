//Aida and an essay
/*
Aida is a "good"girl. She has an essay, and she wants to write it perfectly. She needs to write essay without
duplicate (1 word 1 time). Your output must be words that she needs to paraphrase. Note1: "dream,"and
"dream"are words. Note: output needs to be unique and in lexicographical order
*/
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    map<string,int> m;
    string res="";
    for(int i=0;i<s.size();i++){
        if(int(s[i])!=32){
            res+=s[i];
        }else{
            m[res]++;
            if(m[res]>1){
                 cout << res << endl;
                 m[res]=-100;
            }
            res="";
        }
        
    }
    if(!res.empty()){
        m[res]++;
            if(m[res]>1){
                 cout << res << endl;
                 m[res]=-100;
            }
            res="";
    }
    
    return 0;
}