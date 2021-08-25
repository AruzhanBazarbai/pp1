//The postal code has length a + b + 1 and its (a + 1)-th element is ’-’ and all other elements are digits
//from ’0’ to ’9’. You are given string S, determine whether it follows postal code format or not.

#include <iostream>
using namespace std;
void f(int a,int b,string s){
    bool k=true;
    for(int i=0;i<s.size();i++){
        for(int i=0;i<a;i++){
            if(s[i]<'0' || s[i]>'9'){
                k=false;
            }
        }
        if(s[a]!='-'){
            k=false;
        }
        for(int i=b+1;i<=a+b;i++){
            if(s[i]<'0' || s[i]>'9'){
                k=false;
            }
        }
    }
    if(k) cout << "Yes";
    else cout << "No";

}
int main(){
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;

    f(a,b,s);

    
    return 0;
}