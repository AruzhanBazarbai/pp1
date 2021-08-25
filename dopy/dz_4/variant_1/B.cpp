//Problem B. 78564 Clock
/*
Given how many hours the clock shows. Find the degree of the clock regarding to 12.
Input
Single integer h, 0<=h<=12.
Output
Single integer d degree between present time and 12. 0<=d<=180.
*/
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    double n;
    cin >> n;

    double m=12/n;

    cout << 360/m;

    
    return 0;
}