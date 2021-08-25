#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;

    sort(s.begin(),s.end());
    
    vector<string> v;
    
    cout << "The anagram variants for string " << s << " are:" << endl;
    
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }

    return 0;
}