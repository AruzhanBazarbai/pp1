//Problem E. Calendar
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s,res="";
        cin >> s;
        string year=s.substr(6,4);
        res+=year;
        res+='-';
        string month=s.substr(3,2);
        res+=month;
        res+='-';
        string day=s.substr(0,2);
        res+=day;
        res+='-';
        v.push_back(res);

    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        string s=v[i];
        cout << s.substr(8,2) << "-" << s.substr(5,2) << "-" << s.substr(0,4) << endl;
    }
    return 0;
}