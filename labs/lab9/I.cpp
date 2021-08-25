//Students of first course want to registrate on ejudge.You have login requests.If login is not registered yet
//print new user added, if this login already exist print user already exists.

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin >> s;
        m[s]++;
        if(m[s] > 1) cout << "user already exists" << endl;
        else cout << "new user added" << endl;
       
    }

    return 0;
}