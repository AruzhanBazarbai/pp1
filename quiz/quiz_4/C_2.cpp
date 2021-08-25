//Problem C. The Da Vinci Code - anagram
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s1=s;

    sort(s.begin(),s.end());
    
    cout << "The anagram variants for string " << s1 << " are:" << endl;
    
    do{
        for(int i=0;i<s.size();i++){
            cout << s[i];
        }
        cout << endl;
    }while(next_permutation(s.begin(),s.end()));

    return 0;
}