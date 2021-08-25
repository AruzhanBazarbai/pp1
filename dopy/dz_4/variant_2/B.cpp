//Problem B. 78571 Change char
/*
Given character ch. Increase ascii code of this character by 14 and print new character.
Input
Given char ch.
Output
Print answer for the problem.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    char s;
    cin >> s;
    s=char(int(s)+14);
    cout << s;
    return 0;
}