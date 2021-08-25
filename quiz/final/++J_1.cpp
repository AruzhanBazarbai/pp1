//Problem J. Understandable have a nice day

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    string y;
    int cnt=0;
    while(1){
        y = s;
        rotate(y.begin(),y.begin()+s.size() - cnt,y.end());
        if(y == t){
            cout << cnt;
            return 0;
        }
        cnt++;
        if(cnt==s.size()){
            cout << "Understandable have a nice day";
            return 0;
        }
    }

    return 0;
}