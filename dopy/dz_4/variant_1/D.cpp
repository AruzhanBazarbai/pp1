//Problem D. 79155 Piggy bank
/*
N times given the name of the person and how much money he putted in the piggy bank.
Input
First line contains n(1<=n<=15).
Output
Print names in ascending order and total money of this person putted into piggy bank.
*/
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string,int> m;

    for(int i=0;i<n;i++){
        string s;
        int x;
        cin >> s >> x;
        m[s]+=x;
    }

    map<string,int> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}