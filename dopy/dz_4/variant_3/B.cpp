//Problem B. 79087 Erase first n
/*
Given string. Delete the first n symbols. Print changed string.
Input
First line contains string. Then given n(0<=n<=100).
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
    string s;
    getline(cin,s);
    int n;
    cin >> n;

    s.erase(s.begin(),s.begin()+n);
    cout << s;
    
    return 0;
}