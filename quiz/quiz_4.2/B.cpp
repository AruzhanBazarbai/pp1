//Problem B. Aslan and password

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int f1(int l,int r){
    if(l>r) return 1;
    int x=l;
    bool k=true;
    int i=0;
    int a[]={0,0,0,0};

    while(x>0){
        a[i]=x%10;
        x=x/10; 
        i++;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    k=false;
                    break;
                }
            }
        }
    }
    if(k && l<=r) return l;
    else return f1(l+1,r);

}
int f2(int l,int r){
    if(l>r) return 1;
    int x=l;
    bool k=true;
    int i=0;
    int a[]={0,0,0,0,0};

    while(x>0){
        a[i]=x%10;
        x=x/10; 
        i++;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    k=false;
                    break;
                }
            }
        }
    }
    if(k && l<=r) return l;
    else return f2(l+1,r);

}

using namespace std;

int main(){
    int l,r;
    cin >> l >> r;

    if(l>=1000 && l<10000){
       int c=f1(l,r);
       if(c==1) cout << "Understandable, have a great day";
       else cout << c;
    }else if(l>=10000){
        int z=f2(l,r);
        if(z==1) cout << "Understandable, have a great day";
        else cout << z;
    }
    
    return 0;
}
