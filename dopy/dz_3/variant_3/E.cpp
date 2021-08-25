//triangle equality
/*
Given three sides x, y, z, check whether triangle with this sides is valid or not.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)) cout << "Valid";
    else cout << "Invalid";
    
    return 0;
}