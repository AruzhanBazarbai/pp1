#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

string s[1111], t[1111];
bool b[1111];

int main(){
    vector<pair<string, string> > v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i] >> t[i];
    }
    for(int i = 0; i < n; i++){
        if(b[i])continue;
        string y = s[i];
        for(int j = i; j < n; j++){
            if(y == s[j]) y = t[j], b[j] = 1;
        }
        v.push_back({s[i], y});
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}