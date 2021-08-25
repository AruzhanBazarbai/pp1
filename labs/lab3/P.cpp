//Given a single number x check is it perfect square or not? Perfect square is numbers like 4, 9, 25.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    a=sqrt(n);
    if(n==a*a){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }

    

    return 0;
}