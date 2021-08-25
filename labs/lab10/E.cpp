//Problem E. 77723. Where are students from?
/*
Every year, at summer time, selection commitee takes documents of students, who are from different place
of KZ. Now, they want to know percentage of students from each place. Help them to calculate it.
Input
In the first line number N - amount of days that commitee worked. In next rows will given number
M, how may places in this day. After M rows will be given simultaneous information about next day.
(1<=N<=40),(1<=M<=300).
Output
Each printed row should contain name of place and percentage separated by single empty space. Sort
places alphabetically.
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

map<string,double> mp;

int main(){
    int n;
    cin >> n;
    string s;
    int x,m, sum=0;
    for(int i=0;i<n;i++){
        cin >> x;
        for(int j=0;j<x;j++){
            cin >> s >> m;
            mp[s]+=m;
            sum+=m;
        }
    }
    map<string,double> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        (*it).second=(*it).second/sum*100;
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    return 0;
}
