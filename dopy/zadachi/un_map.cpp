#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

unordered_map<string, int> m;

int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i=0; i<n; i++){
        string s; 
        cin >> s;
        m[s]++;
        if(m[s]>=2){
            cout << s << endl;
            m[s] = -10000;
        }
    }
    
    // unordered_map<string, int> ::iterator it;

    // for(it =m.begin(); it!=m.end(); it++){
    //     if(it->second >=2)
    //         cout << it->first << endl;
    // }

    // for(int i = 0; i<n; i++){
    //     if(m[a[i]]>=2){
    //         cout << a[i] << endl;
    //         m[a[i]] = 0;
    //     }
    // }
    
    return 0;
}

/*

****#
***##
****#

*/