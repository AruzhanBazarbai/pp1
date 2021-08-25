//Цветочки
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    char a='G',b='C',c='V',d;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        d=a;
        a=c;
        c=b;
        b=d;
    }
    cout << a << b << c;
    
    return 0;
}