//Almaz considers that the lucky number to be when the sum of the first two numbers and the sum of the
//last two numbers are equal. Create a code for him so that he does not think a lot.
#include <iostream>
using namespace std;
    int main(){
    int n;
    cin >> n;
    int a, b, c, d;
    a = n / 100000;
    b = (n / 10000)-a*10;
    c = (n % 100 - n % 10)/10;
    d = n % 10;
        if(a+b==c+d){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    return 0;
}