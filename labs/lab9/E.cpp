/*
Sanzhar have n telephone numbers in his contact list. Your task is to find how many numbers occurs in
contact list exactly three times.
Input:
First line contains one integer number n.(1<=n<=1000) Next n lines contains telephone numbers. Each
telephone number has 14 symbols
Output:
Print the number of telephone numbers which occurs exactly three times in Sanzhar’s contact list
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    map<string,int> mp;

    int cnt=0;

    for(int i=0;i<n;i++){
        cin >> s;

        mp[s]++;
      
    }

    map<string,int> :: iterator it;
    
    for(it=mp.begin();it!=mp.end();it++){
        if(3==(*it).second){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}