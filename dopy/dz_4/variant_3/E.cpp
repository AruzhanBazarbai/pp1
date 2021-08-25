//Problem E. 78556 Programing language
/*
Given number of n students in class who knows c++, number of m students who knows python and total
number of t students in the class. Find how many students knows both programing languages if there is
no student in class who don’t know any of this two languages.
Input
The only input line contains the integers n, m and t separated with a space 1<= n<=m<=k<=1000
Output
Output contains single integer.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t,m,n;
    cin >> n >> m >> t;
    int c=t-n;
    cout << m-c;
    return 0;
}