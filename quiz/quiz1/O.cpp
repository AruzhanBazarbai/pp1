//You need to create a mini calculator.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    char x;
    cin >> a >> x >> b;
    int result;
    if(x == '+'){
        result=a+b;
    }
    if(x == '-'){
        result=a-b;
    }
    if(x == '*'){
        result=a*b;
    }
    if(x == '/'){
        result=a/b;
    } 
    
    cout << a << " " << x << " " << b << " " << "=" << " " << result ;
    return 0;
}