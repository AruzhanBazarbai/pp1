//Azat is a perfectionist and he likes everything to be perfect. Help Azat sort letters alphabetically. good
//luck!
#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin >> s;
    multiset<char> ms;
    for(int i=0;i<s.size();i++){
        ms.insert(s[i]);
    }
    multiset<char> :: iterator it;
    for(it=ms.begin();it!=ms.end();it++){
        cout << *it;
    }
    return 0;
}