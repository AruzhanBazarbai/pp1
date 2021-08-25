#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a == 0){
        cout << 0 << " ";

    }else{
        while( a> 0){
        cout << a%10 <<" ";
        a = a/10;
    }
    }
    return 0;
}