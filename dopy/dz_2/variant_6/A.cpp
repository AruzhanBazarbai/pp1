//Your task is to implement a function that takes two integers x and y as arguments and returns the absolute
//value of their difference.
#include <iostream>
#include <algorithm>
using namespace std;

void Absolute(){
    int x,y;
    cin >>  x >> y;
    cout << abs(x-y);
}

int main(){
    Absolute();

    return 0;
}