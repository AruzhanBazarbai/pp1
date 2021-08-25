#include <iostream>
#include <cmath>
using namespace std;
int main (){
    long long x,y,x1,y1,x2,y2,x3,y3,x4,y4,n,cnt=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x >> y >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if(y>=y1 && y<=y3 && x>=x4 && x<=x2) cnt++;
    }
    cout << cnt;

    
    return 0;
}