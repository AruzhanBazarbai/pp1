//The program should output the number 1 if the first number is greater than the second, the number 2 if
//the second is greater than the first, or the number is 0 if they are equal.
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a>b){
        cout << "1" << endl;
    }else if(a<b){
        cout << "2" << endl;
    }else if(a == b){
        cout << "0" << endl;
    }

    return 0;
}