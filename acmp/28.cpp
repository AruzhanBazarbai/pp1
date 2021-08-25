//Симметрия
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int x1,y1,x2,y2,xA,yA;
    cin >> x1 >> y1 >> x2 >> y2 >> xA >> yA;

    if((x1==x2 && x1==xA) || (y1==y2 && y1==yA)){
        if((yA>=min(y1,y2) && yA<=max(y1,y2)) || (xA>=min(x1,x2) && xA<=max(x1,x2))){
            cout << xA << " " << yA;
            return 0;
        }
    }
    if(x1==x2) cout << 2*x1-xA << " " << yA;
    else if(y1==y2) cout << xA << " " << 2*y1-yA;

    
    return 0;
}