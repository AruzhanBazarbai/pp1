/*
Bekbolat does not know which of the following categories belongs to any number. Help Bekbolat determine
which category the given number belongs to.
The categories are :
1 to 4 - Few
5 to 9 - Several
10 to 19 - Pack
20 to 49 - Lots
50 to 99 - Horde
100 to 249 - Throng
from 250 to 499 - Swarm
from 500 to 999 - Zounds
from 1000 - Legion
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=1 && n<=4) cout << "Few";
    else if(n>4 && n<=9) cout << "Several";
    else if(n>9 && n<20) cout << "Pack";
    else if(n>=20 && n<50) cout << "Lots";
    else if(n>=50 && n<100) cout << "Horde";
    else if(n>=100 && n<250) cout << "Throng";
    else if(n>=250 && n<500) cout << "Swarm";
    else if(n>=500 && n<1000) cout << "Zounds";
    else cout << "Legion";
    return 0;
}