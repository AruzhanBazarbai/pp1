//You have given 2 integer numbers A and B. You need to compare A and B.

#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a>b) cout << "greater";
    else if(a==b) cout << "equal";
    else cout << "smaller";

    return 0;
}
