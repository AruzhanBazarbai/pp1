//You have N friends, and M apples, your task is to define minimum number of apples you have to eat
//yourself, so that every one of your friends will have the same amount.

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << b%a;
  
    return 0;
}