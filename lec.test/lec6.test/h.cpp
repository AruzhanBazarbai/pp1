#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string fname, content;
    cin >> fname;
    freopen(fname.c_str(),"r",stdin);
    getline(cin,content);
    cout << content;
    
    

}