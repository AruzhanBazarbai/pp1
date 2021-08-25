#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    

    int b;
    cin >> b;
    int a[100000];
    for(int i = 0; i < b; i++){
        cin >> a[i];
    }
    
    int g[n];
    for(int i = 0; i < n; i++){
        g[i] = i+1;
    }

    int c;
    cin >> c;
    int d[c];
    int cnt = 0;

    for(int i = 0; i < c; i++){
        cin >> d[i];
        a[i + b] = d[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= b + c; j++){
           if( g[i] == a[j]){
               cnt++;
               break;
           }
        }
    }

    if(cnt == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}