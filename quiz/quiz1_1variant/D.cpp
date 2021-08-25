#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int x[10000000];
int y[10000000];

int main(){
    int a,b,n,k;
    int s=0,cnt1=0, cnt2=0,t=0;
    cin >> a >> n >> b >> k;
    while(a>0){
        x[s]=a%2;
        a=a/2;
        cnt1++;
        s++;
    }
    while(b>0){
        y[t]=b%2;
        b=b/2;
        cnt2++;
        t++;
    }
    int first,second;
    for(int i=0;i<cnt1;i++){
        if(n==i){
            first=x[i];
        }
    }
    for(int j=0;j<cnt2;j++){
        if(k==j){
            second=y[j];
        }
    }
    if(first==second) cout << "Money was found";
    else cout << "Where is the money Lebowski?";
  
    return 0;
}