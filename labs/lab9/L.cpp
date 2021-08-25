//Given an array of pair<int, int>. It is required to display the indices of this array in the order of nondecreasing values of first + second in elements with these indices.

#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    multimap<int,int> m;
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        int s=a+b;
        m.insert(make_pair(s,i+1));
    }
    multimap<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << (*it).second << " ";
    }
    
    return 0;

}