/*
All week Temirlan was preparing for the World Programming Championship and forgot to prepare
problems for the quiz. He quickly decided to compose it. He decided to give a simple problem. Given
a function F(x) = n + F(g). Where, x - is the given integer number, n - is the divisors count of x, g - is
the largest divisor of the x. For this function, we have one rule: F(1) = 1;
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;
 
int funcN(int n, int res){
    
    if(n == 1) return res+=1;
 
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            res++;
            //break;
        } 
    }

    for(int i=n-1; i>0; i--){
        if(n % i == 0){
            n = i;
            break;
        }
    }
    return funcN(n, res);
}
 
int main(){
    int n;
    cin >> n;
    int res=0;

    cout << funcN(n, res);
 
    return 0;
}