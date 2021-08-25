#include <iostream>
#include <algorithm>
using namespace std;

int res(string s){
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') res++;
    }
    return res;
}

bool comporator(string s1, string s2){
    int c=res(s1);
    int d=res(s2);
    if(c<d) return true;
    return false;
}


int main(){
    string a[]={"hello","aaaa","apple","banana"};
    int n=4;

    sort(a,a+n,comporator);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
        
    return 0;
}