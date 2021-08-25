#include <iostream>
using namespace std;

int main(){
    int n=20;
    int *ptr;
    ptr=&n;
    
    cout << n << endl;
    cout << ptr << endl;
    cout << &n << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    return 0;
}