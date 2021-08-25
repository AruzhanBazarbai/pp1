#include <iostream>
using namespace std;
int main(){
    double T, P, Y;
    cin >> T >> P >> Y;
    int i=0;
    T*=100;
    Y*=100;
    while(T < Y);{
        T+=T*P/100;
        T=(int)T;
        i++;
    }
    cout << i;
    return 0;
}