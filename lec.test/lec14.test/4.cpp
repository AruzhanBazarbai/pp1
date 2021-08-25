#include <iostream>
#include <vector>
using namespace std;

void f1(int * a){
    cout << "in the main f1:" << endl;
    cout << a << endl;
    cout << *a << endl;
    cout << &a << endl;
}

void f2(int a){
    cout << "in the main f2:" << endl;
    cout << a << endl;
    cout << &a << endl;
}

int main(){
    int x=8;
    cout << "in the main function:" << endl;
    cout << x << endl; 
    cout << &x << endl;

    f1(&x);
    f2(x);

    return 0;
}