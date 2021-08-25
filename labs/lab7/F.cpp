//Print a count of even digits in a given number.

#include <iostream>
#include <cmath>
using namespace std;

int evenF(string  s,int i,int t, int cnt){
    if(i>t-1) return cnt;
    if((s[i]-'0')%2==0) cnt++;
    return evenF(s,i+1,t,cnt);
}

int main(){
    string s;
    cin >> s;
    int t=s.size();
    int cnt=0;

    cout << evenF(s,0,t,cnt);
    
    return 0;
}