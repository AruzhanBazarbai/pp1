//. Aida and her "knowledge"
/*
Aida good at string, but when time goes to STL, she is lost. Task is simple you have an array of vectors
with N elements and K – index in vector. Your task is to sort until K – index by increasing order and
decreasing order after K – index.
Note:
You don’t change element at K position.
*/
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v, v2;
    for(int i=0;i<n;i++){
       int x;
       cin >> x;
       v.push_back(x);
    }
    set<int> s1,s2;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<k-1;j++){
            s1.insert(v[j]);

        }
        for(int z=k;z<v.size();z++){
            s2.insert(v[z]);
        }
    }
    set<int> :: iterator it;
    set<int> :: reverse_iterator rit;
    for(it=s1.begin();it!=s1.end();it++){
        v2.push_back(*it);
    }
    v2.push_back(v[k-1]);
     for(rit=s2.rbegin();rit!=s2.rend();rit++){
        v2.push_back(*rit);
    }
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    return 0;
}