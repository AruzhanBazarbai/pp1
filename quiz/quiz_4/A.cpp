//random pair generator
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
   int n;
    cin >> n;
    map<pair<int, int>, int> a;
    for(int i = 0; i < n; i++){
        int s1, s;
        cin >> s1 >> s;
        if(s1 < s) swap(s1,s);
        a[make_pair(s1,s)]++;
        cout << a[make_pair(f,s)]-1 << endl;
    }
   return 0;
}