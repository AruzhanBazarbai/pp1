/*
You have pizza, the weight of pizza W kilogram, you task is to find you may divide this pizza into two
parts, that each of the two parts weighs even number of kilos, at the same time it is not obligatory that
the parts are equal.
For sure, each of them should get a part of positive weight. And weighs of the two parts must be integer.

Note
For example, you may divide pizza into two parts of 2 and 6 kilos respectively (another variant — two
parts of 4 and 4 kilos).
*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a > 2 && a % 2 == 0) cout << "YES";
    else cout << "NO";
    
    
    return 0;
}