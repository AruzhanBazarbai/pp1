//Problem B. The Da Vinci Code - cipher
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int alph(char s){
    int t=int(s)-'a'+1;
    int x=26-t+1;
    return x;
}

int main(){
    string s;
    cin >> s;

    for(int i=0;i<s.size();i++){
        int x=alph(s[i]);
        s[i]=char('a'+x-1);
    }
    cout << s;

    return 0;
}
