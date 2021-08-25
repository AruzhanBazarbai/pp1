//Problem E. Common characters
/*
You are given a list of strings A. Print all characters that appears in all strings
Input
In the first line given n - number of strings.
In the next n lines given elements of array.
Output
Print all single common characters, if there are no common characters print NO COMMON
CHARACTERS
*/
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<char,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        set<char> st;
        for(int j=0;j<s.size();j++){
            int t=st.size();
            st.insert(s[j]);
            if(t!=st.size()){
               m[s[j]]++;
            }
        }
        st.clear();
    }
    map<char,int> :: iterator it;

    bool k=true;

    for(it=m.begin();it!=m.end();it++){
        if((*it).second==n){
            k=false;
            cout << (*it).first << " ";
            
        }
    }

    if(k) cout << "NO COMMON CHARACTERS";

    return 0;
}