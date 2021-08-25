//Map
/*
Kidirkhan bought some fruits for New Year. Help to him with printing name of fruits which he bought
more than one time, if there is no such fruits print "NO".
Input
You are given N, then the name of fruits and their prices.
Output
Print sorted name of fruits that he bought more than one , if there is no such fruits print "NO".
*/
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string  s;
        int x;
        cin >> s >> x;
        mp[s]++;
    }
    map<string,int> :: iterator it;
    bool k=true;
    for(it=mp.begin();it!=mp.end();it++){
        if((*it).second>1){
            cout << (*it).first << endl;
            k=false;
        }
    }
    if(k) cout << "NO";

    return 0;
}