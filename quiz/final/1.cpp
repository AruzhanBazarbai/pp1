#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum=0;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum+=x;
    }

    string res="";

    while(sum>0){
        res+=char(sum%10+48);
        sum=sum/10;
    }

    cout << stoi(res);
    return 0;
}