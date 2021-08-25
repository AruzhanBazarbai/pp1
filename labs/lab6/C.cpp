//Given two array a and b. Write a function which will find count of equals in two arrays
#include <iostream>
using namespace std;

int n;
int a[101];
int b[101];

void read(){
    int x;
    cin >> n;
    
    for(int i=1;i<=100;i++){
        a[i]=0;
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        cin >> x;
        a[x]++;
    }
    for(int i=0;i<n;i++){
        cin >> x;
        b[x]++;
    }
    int res=0;
    for(int i=1;i<=100;i++){
        res+=min(a[i],b[i]);
        
        
    }
    cout << res;
    
}

int main(){
        read();
        
        
        return 0;
    
}