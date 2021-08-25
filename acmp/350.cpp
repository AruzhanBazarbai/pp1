#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    do{
        cout << s << endl;
    }while(prev_permutation(s.begin(),s.end()));
    return 0;
}