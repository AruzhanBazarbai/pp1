#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    string s[n];

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    

    for(int i=0; i<n; i++){
        string x=s[i];
        int cnt=0;
        if(x.size()>10){
            for(int j=1; j<x.size()-1; j++){
                cnt++;
            }
            cout << x[0] << cnt << x[x.size()-1] << endl;
        }else{
            cout << x << endl;
        }
    }

    

    return 0;
}