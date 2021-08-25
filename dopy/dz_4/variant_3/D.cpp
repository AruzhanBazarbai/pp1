//Problem D. 78583 Investor’s money
/*
Investor invested t tg into start-up. Every month his investments doubles. Find how much will be his
investments after n month.
Input
Integers t and n, 1<=n<=t<=1000
Output
Print solution for the problem
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t,m;
    cin >> t >> m;
    int res=t;
    for(int i=0;i<m;i++){
        t*=2;
    }
    cout << t;
    return 0;
}