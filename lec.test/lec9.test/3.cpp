#include <iostream>
using namespace std;

int a[100][100];

void print(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    print(n,m);
    return 0;

    
}