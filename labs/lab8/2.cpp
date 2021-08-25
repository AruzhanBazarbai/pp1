#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt=0;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        s[i]=char(tolower(s[i]));
        mp[s[i]]++;
        if(mp[s[i]]<=1) cnt++;

    }
    cout << cnt << endl;
    map<char,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout << (*it).first << " ";
    }
  
    return 0;
}