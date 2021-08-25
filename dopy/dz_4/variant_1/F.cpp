//Problem F. 79080 Sort the string
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    cout << s;

    return 0;
}