#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// problem E Done

int f(int n, int cnt){
    
    if(n == 1) return cnt+1;

    for(int i=2; i<=n; i++){
        if(n%i == 0) cnt++;
    }

    for(int i=(n-1); i>0; i--){
        if(n%i == 0){
            n = i;
            break;
        }
    }

    return f(n, cnt);
}

int main(){
    int n;
    
    cin >> n;
    
    cout << f(n, 0);

    return 0;
}
