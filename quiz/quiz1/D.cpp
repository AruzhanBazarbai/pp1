//Schoolboy Vanya decided to do his FEE homework. He was given a very difficult task, few people can cope
//with it. But you will help him. You are given two numbers a and b. You should output three answers:
//usual division a on b, division without remainder a on b, remainder a on b
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int b; 
    cin >> a >> b;
    double c=a/1.0/b;
    cout << "Usual division:" << " " << c << "\n";
    cout << "Division without remainder:" << " " << a/b << "\n";
    cout << "Remainder:" << " " << a % b << " " << "\n";
    return 0;
    }