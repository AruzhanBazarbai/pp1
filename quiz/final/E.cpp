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
        string s;
        cin >> s;
        v.push_back(s);
    }
    int x;
    cin >> x;
    map<string, vector<string> > m;

    for(int i=0;i<x;i++){
        string x,y;
        cin >> x >> y;
         m[x].push_back(y);
         m[y].push_back(x);
    }
    string ingr;
    cin >> ingr;
    
    sort(m[ingr].begin(),m[ingr].end()); 
    
    for(int i=0; i<m[ingr].size();i++){
        cout << m[ingr][i] << " ";
    }
      
 
    
    return 0;
}
