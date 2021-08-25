//You’re given string s, you need to output, is that string increasing in alphabetical order. String increasing
//in alphabetical order, if for every position i in alphabet, we can’t find such character that meets before
//position i and appears in alphabet after letter in position i.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, s1;
    cin >> s;
    s1=s;
    sort(s1.begin(),s1.end());
    if(s==s1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
   
}