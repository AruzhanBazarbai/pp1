#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    int n,a,b,c;
    cin >> n >>  a >> b >> c;
    string res="";
    char d='A',e='a',f='0';

    for(int i=0;i<n;i++){
        if(a!=0 && b!=0 && c!=0){
            res+=d;
            res+=e;
            res+=f;
            a--;
            b--;
            c--;
        }else if(a!=0 && b!=0 && c==0){
            res+=d;
            a--;
            res+=e;
            b--;
        }else if(a==0 && b!=0 && c==0){
            while(b!=0){
                if(e=='z') e='a';
                else e=char(int(e)+1);
                res+=e;
                b--;
            }

        }else if(a!=0 && b==0 && c==0){
            while(a!=0){
                if(d=='Z') d='A';
                else d=char(int(d)+1);
                res+=d;
                a--;
            }

        }else if(a==0 && b==0 && c!=0){
            while(c!=0){
                if(f=='9') f='0';
                else f=char(int(f)+1);
                res+=f;
                c--;
            }

        }else if(a!=0 && b==0 && c!=0){
            res+=d;
            a--;
            res+=f;
            c--;
        }else if(a==0 && b!=0 && c!=0){
            res+=e;
            b--;
            res+=f;
            c--;
        }else if(a==0 && b==0 && c==0 && res.size()!=n){
            while(res.size()!=n){
                res+=d;
                res+=e;
                res+=f;
            }
            break;
        }
    }
    cout << res;
    
    return 0;
}