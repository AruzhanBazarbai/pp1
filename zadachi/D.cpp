//Problem D. Have you read The Da Vinci Code?
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int a[10000];

int f(int n,int x,int y,int i){
    if(n==1) return 1;
    a[i]=x+y;
    x=a[i];
    return f(n-1,y,x,i+1);

}
int main(){
    int n;
    cin >> n;
    int i=2;

    f(n,1,1,i);
    a[0]=1;
    a[1]=1;
    
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}
