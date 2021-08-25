/*
The devil had a watch. But one day they broke. It needs to be repaired you need to sort the time as
below. the first column is hours, then minutes and seconds.
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    multimap<int,string> mp;
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin >> x;
        getline(cin,s);
        mp.insert(make_pair(x,s));
    }

    multimap<int,string> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        cout << (*it).first << (*it).second << endl;
    }

   
    return 0;
}