//Единицы
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin >> n;
    string res="";

    while(n>0){
        res+=char(n%2+48);
        n=n/2;
    }
    int cnt=0;
    for(int i=0;i<res.size();i++){
        if(res[i]=='1') cnt++;
    }

    cout << cnt;

    return 0;
}