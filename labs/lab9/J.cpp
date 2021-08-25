/*
Aida is a very good girl, but there is one thing, she is fond of doramas (Korean TV serials). Every
day she watches several episodes of some dorama. For each dorama, print how many episodes of this
dorama in total she watched in n days. Output the doramas and the number of episodes (print doramas
in lexicographical order )
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    int x;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin >> s;
        cin >> x;
        m[s]+=x;
    }
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}