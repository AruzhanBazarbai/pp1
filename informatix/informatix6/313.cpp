#include <iostream>
using namespace std;

int factorial(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    else
        return n * factorial(n-1);
    
}

int binomial(int n,int k){
    return factorial(n) / (factorial(k) * factorial(n-k));
}

int main(){
    
    
    int n,k;
    cin >> n >> k;

    factorial(n);
    factorial(k);
    factorial(n-k);


    cout << binomial(n,k);



    return 0;
}
