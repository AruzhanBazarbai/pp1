#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,string> m;
    string l,p;
    string a,b;
    for(int i=0;i<n;i++){
        
        cin >> l >> p;
        m[l]=p;
    }
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        
        cin >> a >> b;
        if(m[a]==b) cout << "correct password" << endl;
        else if(m[a]!=b) cout << "password error" << endl;
        else if(m[l]=b) cout << "login error" << endl;
    }
  
    return 0;

}