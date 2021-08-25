#include <iostream>
using namespace std;
int main(){
    int a=123;
    while( a> 0){
        cout << a%10 <<" ";
        a = a/10;
    }
    return 0;
}