//You are given a number n. Find whether it is palindrome or not.
#include <iostream>
using namespace std;
int a[100000];

bool f(int * a,int i,int cnt){
    if(i>cnt-1) return true;
    if(a[i]!=a[cnt-1]) return false;
    return f(a,i+1,cnt-1);
}
int main(){
    int n;
    cin >> n;
    int i=0,cnt=0;
    while(n>0){
        a[i]=n%10;
        n=n/10;
        i++;
        cnt++;
    }
    if(f(a,0,cnt)) cout << "YES";
    else cout << "NO";
    return 0;
}