//Problem E. 2020
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>

int f(int n){
    int x=n;
    bool k=true;
    int i=0;
    int a[]={0,0,0,0};

    while(x>0){
        a[i]=x%10;
        x=x/10; 
        i++;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    k=false;
                    break;
                }
            }
        }
    }
    if(k) return n;
    else return f(n+1);

}

using namespace std;
int main(){
    int n;
    cin >> n;

    cout << f(n+1);
    
    return 0;
}
