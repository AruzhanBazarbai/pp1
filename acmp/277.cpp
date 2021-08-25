//Школьная алгебра
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int a,b,c;
    cin >> a >> b >> c;

    if(b==0 && a==0 && c!=0) cout << c << "y";
    else if(a==0 && b==0 && c==0) cout << 0;

    else if(a!=0){
        cout << a;

        if(b>0){
            if(b!=1) cout << "+" << b << "x";
            else cout << "+x";
        }else if(b<0){
            if(b!=-1) cout << b << "x";
            else cout << "-x";
        }

        if(c>0){
            if(c!=1) cout << "+" << c << "y";
            else cout << "+y";
        }else if(c<0){
            if(c!=-1) cout << c << "y";
            else cout << "-y";
        }
    }else{
        if(b>0){
            if(b!=1) cout << b << "x";
            else cout << "x";
        }else if(b<0){
            if(b!=-1) cout << b << "x";
            else cout << "-x";
        }

        if(c>0){
            if(c!=1) cout << "+" << c << "y";
            else cout << "+y";
        }else if(c<0){
            if(c!=-1) cout << c << "y";
            else cout << "-y";
        }

    }

    return 0;
}