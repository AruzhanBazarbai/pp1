#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a;
    cin >> a;

    if(a>86400){

        a=a%86400;
    }

    cout << a/3600 << ":" ;

    int c=a%60;

    int d=a%3600;

    if(c<10){
        cout << "0" << c << ":";
    }else{
        cout << c << ":";
    }
    
    if(d<10){
        cout << "0" << d;
    }else{
        cout << d;
    }
    return 0;
    
   
}

 