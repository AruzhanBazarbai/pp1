#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

string a[1000];

int main(){
    string s;
    cin >> s;
    string s1=s;
    int i=0,cnt=0;
  
    sort(s.begin(),s.end());
    
    do{
        a[i]=s;
        i++;
        cnt++;
    }while(next_permutation(s.begin(),s.end()));

    cout << "The anagram variants for string " << s1 << " are:" << endl;

    for(int i=0;i<cnt;i++){
        cout << a[i] << endl;
    }

    return 0;
}