//There was problem in 18th century to choose boss for organized crime groups, and they decided to choose
//first boss on the list
#include <iostream>
#include <vector>

using namespace std;

string f(string s, int i, int t, string res){

    if(i>t) return "-1";

    if(s[i] >= 'A' && s[i] <= 'Z'){
        res=s[i];
        return res;
    }

    return f(s, i+1, t, res);
}

int main(){

    string s;
    cin >> s;

    int t=s.size()-1;
    
    cout << f(s, 0, t, "");

    return 0;
}