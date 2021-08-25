/*
Adilet, Temirlan and Orazbek in the same competittive programming team. As a training session, they
decided to solve a contest consisting of N problems. Adilet and Temirlan solved the same number of
problems, and Orazbek solved twice as many as Adilet and Temirlan together.
How many problems did each of them solve?
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,t,o;
    a=n/6;
    t=a;
    o=2*(a+t);
    cout << a << " " << o << " " << t;
    
  
    return 0;
}