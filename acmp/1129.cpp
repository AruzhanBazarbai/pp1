//Банковские проценты
#include <iostream>
using namespace std;
int main(){
    double x,p,y;
    int cnt=0;
    cin >> x >> p >> y;

    x*=100;
    y*=100;

    while(x<y){
        x=x+x*p/100;
        x=int(x);
        cnt++;
    }
    cout << cnt;

    return 0;
}