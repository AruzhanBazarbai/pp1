//Vector
//You are given a line. Write a program that find the sum of only digits. Look at the example.
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
   
    vector<int> v;

    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            v.push_back(int(s[i])-48);
        }
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout << sum;
    


    return 0;
}