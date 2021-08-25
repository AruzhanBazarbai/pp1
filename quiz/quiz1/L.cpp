//Is time relative or not? I’ve already counted N seconds, I wonder how much time has passed since I started.
//Help me create something like a clock. I hope you can do it.
#include <iostream>
using namespace std;
int main(){
    int n,m,h,s;
    cin >> n;
    h=n/3600;
    m=(n-h*3600)/60;
    s=n-h*3600-m*60;
    cout << h << ":" << m << ":" << s;
}