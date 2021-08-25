//Problem A. 79165 2’nd min
/*
Given list of numbers. How much time 2’nd min appears in the list.
Input
First line contains n - (2<=n<=30). Then n times given elements of the list.
Output
Print solution for the problem.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    map<int,int> m;

    for(int i=0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    int maxi=-1e9, Smaxi;

    for(int i=0;i<n;i++){
        if(maxi<a[i]){
            Smaxi=maxi;
            maxi=a[i];
            
        }
    }

    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(Smaxi==(*it).first) cout << (*it).second;
    }

    

    return 0;
}