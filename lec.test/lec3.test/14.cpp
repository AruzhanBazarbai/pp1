#include <iostream>
using namespace std;
int main(){
    int x=1;
    int a, b;
    //a= ++x + x++;
    b= x++ + ++x;
    cout << b << "\n";
    return 0;
}