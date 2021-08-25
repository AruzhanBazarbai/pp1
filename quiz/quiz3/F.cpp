#include <iostream>  
#include <cmath>
#include <vector>
#include <set>
using namespace std;

void f_p(int t){
    while(t%2==0){
        cout << 2 << " ";
        t = t/2;
    }

    for(int i = 3;i<=sqrt(t);i=+2){
      while(t%i==0){
        cout << i << " ";
        t=t/i;
      }
    }

   if(t>2) cout << t << " ";
}

int main(){
   int t;
   cin >> t;
   f_p(t);
   return 0;
}
