//Problem G. Projection Area of 3D Shapes
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int sum1=0, sum2=0, sum3=0;
    for (int i=0; i<n; i++){
        sum1+=a[n-1][i];
        sum2+=a[i][n-1];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(a[i][j]!=0)  a[i][j]=1;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(a[i][j]==1)  sum3+=a[i][j];
        }
    }
    cout  << sum1+sum2+sum3;
}