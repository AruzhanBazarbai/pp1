//Problem F. Adding Reversed Numbers

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
using namespace std;

int f(string s){
    reverse(s.begin(),s.end());
    int x=stoi(s);
    return x;
}

string sum(string s,string t,string res){
    int x=f(s);
    int y=f(t);
    int c=x+y;

    while(c>0){
        res+=char(c%10+48);
        c=c/10;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<string> v;

    for(int i=0;i<n;i++){
        string s,t;
        cin >> s >> t;
        string res=sum(s,t,"");
        cout << stoi(res) << endl;
    }

    return 0;
}