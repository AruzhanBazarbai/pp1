//who is the best
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    double total=0;
    map<string,double> mp;

    for(int i=0;i<n;i++){
        string s;
        double x;
        cin >> s >> x;

        mp[s]+=x;
        total+=x;
    }

    map<string,double> :: iterator it;
    vector<pair<double,string> > v;
   
    for(it=mp.begin();it!=mp.end();it++){
       v.push_back(make_pair((*it).second,(*it).first));
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        double point=v[i].first/total*100.00;
        cout << v[i].second << " " << point << "%" << endl;
        
    }
    return 0;
}