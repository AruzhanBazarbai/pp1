//Find sum of digits of given number.
#include <iostream>
#include <cmath>
using namespace std;

int sum(string s, int i, int n, int res){
    if(i==n) return res;
    res+=(s[i]-'0');
    return sum(s,i+1,n,res);
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    

    cout << sum(s,0,n,0);
    
    return 0;
}