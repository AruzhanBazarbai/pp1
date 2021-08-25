//Быки и коровы
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    string a,b;
    cin >> a  >> b;
    int cnt=0,res=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]) cnt++;
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]) res++;
    }
    cout << res << " " << cnt-res;
    return 0;
}