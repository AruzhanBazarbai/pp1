//delete
/*
You are given a line. Write a program that removes all duplicate characters from a string.
*/
#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    set<char> my_set;
    for(int i = 0; i < n; i++){
        my_set.insert(s[i]);
    }
    for(int i = 0; i < n; i++){
            if(my_set.find(s[i]) != my_set.end()){
            cout << s[i];
            my_set.erase(s[i]);
        }
    }
    return 0;
}