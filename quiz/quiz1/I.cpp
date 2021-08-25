//Given three natural numbers a, b, c, written in separate lines. You need to check whether there is a
//triangle with such sides.
#include <iostream>
using namespace std;
int main(){
 
    int a, b, c;
 
    cin >> a >> b >> c;
 
    if(a+b>c && b+c>a && a+c>b){
            cout << "Yes";
    }
 
    else{
        cout << "No";}
 
    return 0;
}