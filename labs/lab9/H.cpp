/*
Students of first course want to registrate on ejudge.You have login requests.If login is not registered yet
print new user added, if this login already exist print user already exists.
Input:
You have n - number of requests.(1 <= n <= 2000) Next n lines contain string s, where s - login
Output:
Print answers for every request.
*/
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
        m.insert(make_pair(s,i+1));
    }
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}