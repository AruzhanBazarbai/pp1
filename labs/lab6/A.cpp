//You are given two integers a and b. Write function which will return single integer, sum of a, b
#include <iostream>
using namespace std;

int apb(int a, int b){
    int c=a+b;
    return c;
}

int main(){
    int a ,b;
    cin >> a >> b;
    cout << apb(a,b) << endl;
    return 0;
}