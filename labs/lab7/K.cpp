//You are given a big number n. You should find a maximum digit of this big number
#include <iostream>
#include <climits>
using namespace std;

int maxiV(string  s,int i,int t, int maxi){
    if(i>t-1) return maxi;
    if(maxi<(s[i]-'0')) maxi=(s[i]-'0');
    return maxiV(s,i+1,t, maxi);
}

int main(){
    string s;
    cin >> s;
    int t=s.size();
    int maxi=INT_MIN;

    cout << maxiV(s,0,t,maxi);
    
    return 0;
}