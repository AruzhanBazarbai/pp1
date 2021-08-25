//Утренняя пробежка
#include <iostream>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    int cnt=1;

    while(x<y && y-x>0.000001){
        x+=0.15*x;
        cnt++;
    }
    cout << cnt;

    return 0;
}