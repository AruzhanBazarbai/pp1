#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// problem G Done

string f(string str){

    if(str.size() == 0) return "-1";

    if(int(str[0]) <= 90) return str.erase(1, str.size()-1);

    return f(str.erase(0, 1)); 
}


int main(){
    string str;

    cin >> str;

    cout << f(str);

    return 0;
} 
