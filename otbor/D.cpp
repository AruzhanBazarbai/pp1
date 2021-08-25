#include <iostream>
using namespace std;
int main(){

    string n;
    getline(cin,n);

    string s;
    getline(cin,s);

    string z;
    getline(cin,z);

    bool k=true;

    for(int i=1;i<s.size();i++){
        if(s[i]==n[0]){
            k=false;
        }
    }

    for(int j=1;j<z.size();j++){
        if(z[j]==n[0]){
            k=false;
        }
    }

    string i="Oh, my keyboard!";
    string j="I become the guy.";
    
    if(k) cout << i;
    else cout << j;
    return 0;
}