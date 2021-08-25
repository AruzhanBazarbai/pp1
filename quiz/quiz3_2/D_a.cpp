#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//Problem D  //Done

int f(int k, int m, long long int x){

    if(m == 1) return 0;
    if(m == 2) return 1;
    
    x = f(k, m-2, x) + k * f(k, m-1, x);
    
    return x%10;
}
 
int main(){
 
    int k, m;
    cin >> k >> m;
 
    long long int x;

    cout << f(k, m, x);
 
    return 0;
}