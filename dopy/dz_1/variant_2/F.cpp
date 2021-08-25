//найти gcd двух чисел
#include <iostream>
using namespace std;

int main(){
   int a,b;
   cin >> a >> b;
   int gcd,a1,b1,r1,r2;
   a1=a,b1=b;
   r1=a%b;

   while(r1>0){
       r2=r1;
       r1=a%b;
       a=b;
       b=r1;
    }

    gcd=r2;
    cout << gcd;

    return 0;
}