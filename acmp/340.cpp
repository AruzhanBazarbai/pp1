#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    unsigned long long a[3],b[3],x;

    for(int i=0;i<3;i++){
        cin >> x;
        a[i]=x;
    }
    for(int i=0;i<3;i++){
        cin >> x;
        b[i]=x;
    }
    long long c=-1;
    bool k=false,z=false;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]==b[j] && c!=b[j] && k==false){
                c=b[j];
                k=true;
            }else if(a[i]==b[j] && c!=b[j] && k==true){
                c=b[j];
                z=true;
            }
        }
    }

    if((z==false || k==false)||(z==false && k==false)){
        cout << "Boxes are incomparable";
        return 0;
    }else{
        unsigned long long s1=1,s2=1;
        for(int i=0;i<3;i++){
            if(a[i]!=0) s1*=a[i];
        }
        for(int i=0;i<3;i++){
            if(b[i]!=0) s2*=b[i];
        }
        if(s1>s2) cout << "The first box is larger than the second one";
        else if(s1==s2) cout << "Boxes are equal";
        else cout << "The first box is smaller than the second one";

    }

    return 0;
}