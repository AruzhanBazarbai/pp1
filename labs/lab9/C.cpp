//Given n positive integer numbers.Print how many numbers occurs at least 2 times in this array.
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n,x;
    cin >> n;
    map<int,int> msE;
    for(int i=0;i<n;i++){
        cin >> x;
        msE[x]++;
    }
    map<int,int> :: iterator it;

    int cnt=0;

    for(it=msE.begin();it!=msE.end();it++){
        if((*it).second>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}