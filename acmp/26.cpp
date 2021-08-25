//Две окружности
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double r=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    bool k=true;

    if(!(r1+r2>=r && r1+r>=r2 && r2+r>=r1)) k=false;

    if(k) cout << "YES";
    else cout << "NO";
    
    return 0;
}