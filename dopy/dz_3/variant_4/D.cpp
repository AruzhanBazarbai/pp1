//shopping
/*
Aida and Aizhan are going to mall to shopping. They want to be unique, so if Aida buys 1 thing Aizhan
can’t buy it. They buy by turns, first start Aida. You need to print Aida’s and Aizhan’s purchases.
Input
Given items that Aida and Aizhan want to buy.
Output
First print "Aida"then print her items. Like this repeat with "Aizhan".
*/
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
string a[1000];
int main(){

    string s;
    int i=0, cnt=0;
    unordered_map<string,int> mp;
    vector<string> Aida, Aizhan;

    while(cin >> s){
        a[i]=s;
        i++;
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        if(i%2==0){
            if(mp[a[i]]==0){
                Aida.push_back(a[i]);
                mp[a[i]]++;
            }
        }else{
            if(mp[a[i]]==0){
                Aizhan.push_back(a[i]);
                mp[a[i]]++;
            }
        }
    }
    cout << "Aida" << endl;
    for(int i=0;i<Aida.size();i++){
        cout << Aida[i] << endl;
    }
    cout << "Aizhan" << endl;
    for(int i=0;i<Aizhan.size();i++){
        cout << Aizhan[i] << endl;
    }

    return 0;
}