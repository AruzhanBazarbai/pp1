//Given a single number x check if it is prime number or not. A prime number (or a prime) is a natural
//number greater than 1 that cannot be formed by multiplying two smaller natural numbers
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int k=0;
    cin >> n;

    double b=sqrt(n);
    double d=n%3;

    if(n == 1 || n == 2){k=0;}

    if(d == 0){k=1;}

   if(d != 0){
    for(int i = 2; i <= b; ++i){
        int a = n % i;
        
        if(a == 0){
            k=1;
        }
    }
   }

   if(k==0){cout << "Yes";}
   if(k==1){cout << "No";}

return 0;
}