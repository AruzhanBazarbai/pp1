/*
Oma is a student at KBTU. Everyday he uses subway to get to the university. By his assumptions, this
month he is going to ride the subway n times. Each ride costs him x tenge. Also, as he discovered, there
is a ticket that he can use for a whole months which he can buy at a price y tenge. If he buys this ticket,
instead of paying for every ride x (totally n ∗ x) tenge, he will pay only y tenge.
Can you help him to make a decision which minimizes his wastes?
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    int c=n*x;
    if(c>y) cout << "Yes";
    else if(c==y) cout << "No difference";
    else cout << "No";
    return 0;
}