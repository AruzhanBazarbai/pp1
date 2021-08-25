//Конец уроко
#include <iostream>
using namespace std;
int main(){
    int n,h,m,pE,pO;
    cin >> n;
    if(n%2==0){
       pO=n/2;
       pE=pO-1;
       m=5*pO+15*pE+45*n;
    }else{
        pO=n/2;
        m=20*pO+45*n;
    }
    h=m/60;
    m=m%60;
    cout << 9+h << " " << m;
    
    return 0;
}
