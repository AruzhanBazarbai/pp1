#include <iostream>
#include <vector>
#include<map>
#include <algorithm>
using namespace std;

int main (){
    map<string,double> mp;
    int n;
    double sum = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        double k;
        cin >> k;
        sum+=k;
        mp[s]+=k;
    }
    vector<pair<double, string> > vc;
    map<string,double> :: iterator it;
    for(it=mp.begin();it!= mp.end();it++){
        vc.push_back(make_pair((*it).second,(*it).first));
    }
    
    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());

    for( int i = 0; i<vc.size(); i++){
        double point = vc[i].first/sum * 100.00;
        cout << vc[i].second << " " << point << "%" << endl;
    }
    return 0;
}