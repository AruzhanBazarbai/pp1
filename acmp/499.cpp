//Турист
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int k,w,a2,a1,a3,b1,b2,b3;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    
    if((a1<=w && b1>=k)||(a2<=w && b2>=k)||(a3<=w && b3>=k)) cout << "YES";
    else if(a1+a2<=w && b1+b2>=k) cout << "YES";
    else if(a2+a3<=w && b3+b2>=k) cout << "YES";
    else if(a1+a3<=w && b3+b1>=k) cout << "YES";
    else if(a1+a2+a3<=w && b3+b2+b1>=k) cout << "YES";
    else cout << "NO";

    return 0;
}