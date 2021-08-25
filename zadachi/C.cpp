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

    sort(s.begin(),s.end());
    
    cout << "The anagram variants for string " << s << " are:" << endl;
    
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    return 0;
}
