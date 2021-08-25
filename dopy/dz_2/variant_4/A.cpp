#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool k=true;
    
    for(int i=0;i<s.size();i++){
        if(i==0 || i>3){
            if(s[i]!='A' && s[i]!='B' && s[i]!='C' && s[i]!='E' && s[i]!='H' && s[i]!='K' && s[i]!='M' && s[i]!='O' && s[i]!='P' && s[i]!='T' && s[i]!='X' && s[i]!='Y' ){
                k=false;
                break;

            }else if(i>0 && i<4){
                if(s[i]>='0' && s[i]<='9'){
                    k=false;
                    break;
                }
            }
        }
    }

    if(k) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}