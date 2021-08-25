//Золото племени АББА
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main(){
    vector<string> v;
    set<string> st;
    int maxi=0;
    long long int n=0;

    for(int i=0;i<3;i++){
        string s;
        cin >> s;
        if(maxi<s.size()) maxi=s.size();
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++){
        if(v[i].size()<maxi){
            while(v[i].size()!=maxi){
                v[i]='0'+v[i];
            }
        }
        st.insert(v[i]);
    }
    set<string> :: reverse_iterator it;

    for(it=st.rbegin();it!=st.rend();it++){
        //string x=*it;
        //for(int i=0;i<x.size();i++){
        //    n=n*10+(x[i]-'0');
        //}
        cout << *it;
        break;
    }
    //cout << n;

    
    return 0;
}