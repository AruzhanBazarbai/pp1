#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
 
// Problem C
 
int f(char op, int x, int y){
 
    if(op == '+') return x + y;
    if(op == '*') return x * y;
    if(op == '-') return x - y;
 
}
 
int main(){
    int n;
    cin >> n;
 
    vector <int> num;
    vector <string> name;
    
    for(int i = 0; i < n; ++i){
        char op, a, b; 
        int x, y;
 
        cin >> op >> a >> x >> b >> y;
 
        string s;
        
        s += a; s += " "; s += op; s += " ";
        s += b; s += " = ";
        
        name.push_back(s);
        num.push_back(f(op, x, y));
    }
 
    for(int i = 0; i < n; ++i){
        cout << name[i] << num[i] << endl;
    }
 
    return 0;
}