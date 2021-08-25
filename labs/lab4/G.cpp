#include <iostream>
using namespace std;
int a[1000][1000];
int main(){
    int n;
    cin >> n;
    int cnt=1;
    int marker=n;
    for(int i=1; i<=n; i++){
        for(int j=marker-1; j>=0;j--){
            if(i+j==n){
                a[i][j]=cnt;
            }
        }
        marker--;
        cnt++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==i){
                cout << a[i][j];
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
    
    return 0;
}