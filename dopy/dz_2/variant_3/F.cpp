/*
Aizhan, Akmaral and Aktoty are making slimes. They are together made S slimes.
How many slimes did each child, if it is known that Akmaral and Aktoty made the same number of slimes,
and Aizhan made twice as many slimes as Aktoty and Akmaral together?
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int s;
    cin >> s;

    int a,b,c;

    a = s/6;
    b = s/6;
    c = a*2+b*2;

    cout << a << " " << c << " " << b;



    


    return 0;
}