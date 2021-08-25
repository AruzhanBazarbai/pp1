//palindrome with recursion
//You are given t queries, in each query given integer n. Determine for each query whether an integer n is
//a palindrome. An integer is a palindrome when it reads the same backward as forward. solve the problem
//via recursion. if not 0 points

#include <iostream>
using namespace std;
int a[100000];

bool f(string s,int i,int t){
    if(i>t-1) return true;
    if(s[i]!=s[t-1]) return false;
    return f(s,i+1,t-1);
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int t=s.size();
        if(f(s,0,t)) cout << "YES";
        else cout << "NO";
    }
    
    return 0;
}