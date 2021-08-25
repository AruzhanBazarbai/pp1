#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    int d;
    int c=-109;
    if(a>0){
       d=abs(c+a*b);
    }else{
        d=abs(-109-a*b);
    }
    
    cout << d;
    return 0;
}