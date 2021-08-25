//От перестановки что-то меняется ...
#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;
map<int,bool> m;
int main (){
    int a[3];

    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
           m[a[i]+a[j]]=true;
        }
    }
    map<int,bool> :: iterator it;
    bool k=false;
    
    for(int i=0;i<3;i++){
        for(it=m.begin();it!=m.end();it++){
            if(m[a[i]]==true){
                 k=true;
                 break;
            }
        }
    }
    if(k) cout << "YES";
    else cout << "NO";

    
    return 0;
}