//Problem D. Where is the money Lebowski?
//Daniil’s money was stolen by Lebowski. Since Daniil is a professional hacker, he wants to know where his
//money is. After hacking, he received 4 numbers: a, n, b, k. If the n-th bit of the number a is equal to the
//k-th bit of the number b, he will find his money. Help him write a program.
#include <iostream>
using namespace std;
int main(){
    int a, n , b, k, l , m;
    cin >> a >> n >> b >> k;
    l=(a>>n)&1;
    m=(b>>k)&1;
    if (l==m)
    cout << "Money was found";
    else if (l!=m)
    cout << "Where is the money Lebowski?";
    return 0;
}